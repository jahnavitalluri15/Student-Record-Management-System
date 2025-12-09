#ifndef UTILITY_HPP
#define UTILITY_HPP
#include <string>

bool login(const std::string& username, const std::string& password) {
    return username == "admin" && password == "admin";
}

#endif
