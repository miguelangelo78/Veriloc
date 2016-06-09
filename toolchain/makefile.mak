SRC = src
OBJ = obj
GEN = $(SRC)/gen
BIN = bin
EXEC = veriloc
RM = rm
CXX = g++
CPPFLAGS = -Isrc -Isrc/gen -lfl
ENV =
ifeq ($(OS),Windows_NT)
	ENV += toolchain/Windows/Tools/GnuWin32/bin/
	CPPFLAGS += -Ltoolchain/Windows/Tools/GnuWin32/lib
endif
LEX = $(ENV)flex
BISON = $(ENV)bison
YFLAGS = -d
LFLAGS = 

makefile_dir:=$(shell dirname $(realpath $(lastword $(MAKEFILE_LIST))))

####### Source filenames:
LEXER = lex
PARSER = parser

####### Objects/Outputs:
OBJS = $(GEN)/$(PARSER).tab.c $(GEN)/$(LEXER).yy.c $(OBJ)/main.o $(OBJ)/ast.o \
	$(OBJ)/ast_to_verilog.o $(OBJ)/ast_statement.o \
	$(OBJ)/ast_expression.o $(OBJ)/ast_declaration.o \
	$(OBJ)/cmdline.o

####### Lexer:
$(GEN)/$(LEXER).yy.c: $(SRC)/$(LEXER).l
	$(LEX) $(LFLAGS) $^
	mv $(LEXER).yy.c $@

####### Parser:
$(GEN)/$(PARSER).tab.c: $(SRC)/$(PARSER).y
	$(BISON) $(YFLAGS) $^
	mv $(PARSER).tab.c $@
	mv $(PARSER).tab.h $(patsubst %.c, %.h, $@)

####### C++ code:
$(OBJ)/main.o: $(SRC)/main.cpp
	$(CXX) -o $@ -c $^ $(CPPFLAGS)

$(OBJ)/ast.o: $(SRC)/ast.cpp
	$(CXX) -o $@ -c $^ $(CPPFLAGS)

$(OBJ)/ast_to_verilog.o: $(SRC)/ast_to_verilog.cpp
	$(CXX) -o $@ -c $^ -std=c++11 $(CPPFLAGS)

$(OBJ)/ast_statement.o: $(SRC)/ast_statement.cpp
	$(CXX) -o $@ -c $^ -std=c++11 $(CPPFLAGS)

$(OBJ)/ast_expression.o: $(SRC)/ast_expression.cpp
	$(CXX) -o $@ -c $^ -std=c++11 $(CPPFLAGS)

$(OBJ)/ast_declaration.o: $(SRC)/ast_declaration.cpp
	$(CXX) -o $@ -c $^ -std=c++11 $(CPPFLAGS)
	
$(OBJ)/cmdline.o: $(SRC)/cmdline.cpp
	$(CXX) -o $@ -c $^ -std=c++11 $(CPPFLAGS)

all: $(OBJS)
	$(CXX) -o $(BIN)/$(EXEC) $^ $(CPPFLAGS)
	@printf "Finished!\n"

clean:
	$(RM) $(GEN)/*.*
	$(RM) $(BIN)/*
	$(RM) $(OBJ)/*.o

run:
	@$(BIN)/$(EXEC) ${ARGS}

test%:
	@cd $(makefile_dir)/..
	@$(BIN)/$(EXEC) testbench/$@ -o $@ -c icarus
