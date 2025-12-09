#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>

struct Student {
    int id;
    std::string name;
    int age;
    std::string course;
    std::string grade;
};

void studentMenu(); // forward declaration used by main.cpp

#endif
