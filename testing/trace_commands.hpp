#include <iostream>
#include <string>

/* 
trace_command - Creates a command to create an output from the ./tsh executable

traceFile: exact file name for the trace we need
*/
std::string trace_command(const std::string& traceFile) {
    std::string command = "";
    command += "./sources/sdriver.pl -t ./sources/"
            + traceFile
            + " -s ./sources/tsh -a \"-p\"";
    return command;
}

/*
trace_command - Creates a command to create an output from the ./tshref executable

traceFile: exact file name for the trace we need
*/
std::string rtrace_command(const std::string& traceFile) {
    std::string command = "";
    command += "./sources/sdriver.pl -t ./sources/"
            + traceFile
            + " -s ./sources/tshref -a \"-p\"";
    return command;
}