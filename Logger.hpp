#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <fstream>
#include <string>
#include <ctime>

class Logger {
public:
    static void log(const std::string &msg) {
        std::ofstream file("logs.txt", std::ios::app);
        time_t now = time(nullptr);
        file << ctime(&now) << " => " << msg << "\n";
    }
};

#endif
