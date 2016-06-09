/*
 * external_tool.h
 *
 *  Created on: 09/06/2016
 *      Author: Miguel
 */

#ifndef EXTERNAL_TOOL_H_
#define EXTERNAL_TOOL_H_

#include <algorithm>
#include <string>
using namespace std;

enum RUN_CMD {
	UNKNOWN_CMD,
	COMPILER_ICARUS,
	VIEWER_GTKWAVE
};

extern char compiler_type(string compiler_name);
extern void external_execute(char run_cmd, string & source_code);

#endif /* EXTERNAL_TOOL_H_ */
