#include <string>

namespace log_line {
std::string message(std::string line) {
    int splitHere = line.find(' ');

    std::string message = line.substr(splitHere, line.length() - 1);
    // return the message
    return message;
}

std::string log_level(std::string line) {
    if (line.length < 1) return line;
    int splitHere = line.find(']');

    std::string logLvl = line.substr(1, splitHere);
    // return the log level
    return logLvl;
}

std::string reformat(std::string line) {
    // return the reformatted message
    return message(line) + ' ' + '(' + log_level(line) + ')';
}
}  // namespace log_line
