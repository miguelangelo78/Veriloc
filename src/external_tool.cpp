/*
 * external_tool.cpp
 *
 *  Created on: 09/06/2016
 *      Author: Miguel
 */
#include <headers.h>
#include <external_tool.h>

#define TMP_FILE string("a")

char compiler_type(string compiler_name) {
	transform(compiler_name.begin(), compiler_name.end(), compiler_name.begin(), (int (*)(int))tolower);
	if(compiler_name == "icarus") return COMPILER_ICARUS;
	return UNKNOWN_CMD;
}

string strip_extension(string filename) {
	string name = filename;
	size_t pos = name.rfind(".");
	if(pos == -1) {
		/* No extension found */
		return name;
	} else if (pos == 0) {
		/* Found . at the front. Therefore not an extension */
		return name;
	} else {
		/* File extension found */
		return name.substr(0, pos);
	}
}

void exec_cmd(char * cmd) {
	/* Execute command */
#if DEBUG == 1
			printf("Executing external command: '%s'\n", cmd);
#endif
		system(cmd);
}

static std::vector<string> temp_objfiles;

void external_execute(char run_cmd, ...) {
	char cmd[128];
	va_list args;
	va_start(args, run_cmd);

	switch(run_cmd){
	case COMPILER_ICARUS: { /* Execute Icarus compiler */
		string filename = string(va_arg(args, char*));
		int skip_verilog_src = va_arg(args, int);

		if(filename == "(stdio)" || skip_verilog_src) {
			/* Generate temporary file and compile that file: */
			string source_code = string(va_arg(args, char*));
			int compile_and_run = va_arg(args, int);

			/* Prepare temporary (.v) file: */
			ofstream f;
			string tmp_filename = filename == "(stdio)" ? TMP_FILE : strip_extension(filename);
			f.open((tmp_filename + ".v").c_str());
			f << source_code;
			f.close();

			/* Prepare command and build that .v file: */
			sprintf(cmd, "iverilog -o %s.o %s.v", tmp_filename.c_str(), tmp_filename.c_str());
			exec_cmd(cmd);

			if(compile_and_run) {
				sprintf(cmd, "vvp %s.o", tmp_filename.c_str());
				exec_cmd(cmd);
			}

			/* Cleanup .v temporary files: */
			remove((tmp_filename + ".v").c_str());
			temp_objfiles.push_back(tmp_filename + ".o");
		} else {
			/* Skip variadic arguments: */
			va_arg(args, char*);
			int compile_and_run = va_arg(args, int);
			/* Compile given file */
			char* output_filename = (char*)strip_extension(filename).c_str();
			sprintf(cmd, "iverilog -o %s.o %s", output_filename, filename.c_str());
			exec_cmd(cmd);

			if(compile_and_run) {
				sprintf(cmd, "vvp %s.o", output_filename);
				exec_cmd(cmd);
			}
		}

		break;
	}
	case VIEWER_GTKWAVE: { /* Execute GTKWave on the result of the Compiler */
		string vcd_file = string(va_arg(args, char*));
		if(vcd_file != "(null)") {
			sprintf(cmd, "gtkwave %s", vcd_file.c_str());
			exec_cmd(cmd);
		}
		break;
	}
	case CLEANUP_TOOL:
		for(auto file : temp_objfiles)
			remove(file.c_str());
		break;
	}
	va_end(args);
}

