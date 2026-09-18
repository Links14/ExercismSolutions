#include <string>

namespace log_line
{
    std::string message(std::string line)
    {
        std::string message = line.substr(line.find(' ') + 1, line.end());
        // return the message
        return message;
    }

    std::string log_level(std::string line)
    {
        std::string logLvl = line.substr(line.find('[') + 1, line.find(']') - 1);
        // return the log level
        return logLvl;
    }

    std::string reformat(std::string line)
    {
    // return the reformatted message
        return message(line) + " (" + log_level(line) + ')';
    }
}  // namespace log_line
