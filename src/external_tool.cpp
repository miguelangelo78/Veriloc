/*
 * external_tool.cpp
 *
 *  Created on: 09/06/2016
 *      Author: Miguel
 */
#include <external_tool.h>

char compiler_type(string compiler_name) {
	transform(compiler_name.begin(), compiler_name.end(), compiler_name.begin(), (int (*)(int))tolower);
	if(compiler_name == "icarus") return COMPILER_ICARUS;
	return UNKNOWN_CMD;
}

void external_execute(char run_cmd, string & source_code) {
	switch(run_cmd){
	case COMPILER_ICARUS:

		break;
	case VIEWER_GTKWAVE:

		break;
	}
}

