#include <string>

namespace log_line {
std::string message(std::string line) {
    // return the message
    int ind = line.find(": ");
    return line.substr(ind+2);
}

std::string log_level(std::string line) {
    // return the log level
    int ind = line.find(": ");

    return line.substr(1, ind-2);
}

std::string reformat(std::string line) {
    // return the reformatted message
    return message(line) + " (" + log_level(line) + ')';
}
}  // namespace log_line
