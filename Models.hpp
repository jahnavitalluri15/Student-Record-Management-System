#ifndef MODELS_HPP
#define MODELS_HPP

#include <string>

struct Teacher {
    int id;
    std::string name;
    std::string subject;
};

struct Admin {
    std::string username;
    std::string password;
};

#endif
