ENV =
ifeq ($(OS),Windows_NT)
	ENV += toolchain/Windows/Tools/GnuWin32/bin/
endif
SRC = src
OBJ = obj
GEN = $(SRC)/gen
BIN = bin
EXEC = veriloc
LEX = $(ENV)flex
BISON = $(ENV)bison
YFLAGS = -d
LFLAGS =
RM = rm
CXX = g++
CPPFLAGS = -Isrc -Isrc/gen -Ltoolchain/Windows/Tools/GnuWin32/lib -lfl

makefile_dir:=$(shell dirname $(realpath $(lastword $(MAKEFILE_LIST))))

####### Source filenames:
LEXER = lex
PARSER = parser

####### Objects/Outputs:
OBJS = $(GEN)/$(PARSER).tab.c $(GEN)/$(LEXER).yy.c $(OBJ)/main.o

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

all: $(OBJS)
	$(CXX) -o $(BIN)/$(EXEC) $^ $(CPPFLAGS)
	@printf "Finished!"

clean:
	$(RM) $(GEN)/*.*
	$(RM) $(BIN)/*.exe
	$(RM) $(OBJ)/*.o

run:
	@$(BIN)/$(EXEC) ${ARGS}

test%:
	@cd $(makefile_dir)\..
	@$(BIN)/$(EXEC) testbench\$@
