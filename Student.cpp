#include "FileManager.hpp"
#include "Logger.hpp"
#include "Student.hpp"
#include <iostream>
using namespace std;

void studentMenu() {
    int id, age;
    string name, course, grade;

    cout << "\n--- Add New Student ---\n";
    cout << "Enter Student ID: "; cin >> id;
    cout << "Enter Name: "; cin >> name;
    cout << "Enter Age: "; cin >> age;
    cout << "Enter Course: "; cin >> course;
    cout << "Enter Grade: "; cin >> grade;

    auto students = FileManager::loadStudents();
    students.push_back({id, name, age, course, grade});
    FileManager::saveStudents(students);

    Logger::log("Student added: " + name);
    cout << "Student Added Successfully\n";
}
