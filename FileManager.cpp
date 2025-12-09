#include "FileManager.hpp"
#include <iostream>
#include <sstream>

using namespace std;

// ---------- Students ----------
void FileManager::saveStudents(const vector<Student>& v) {
    ofstream file("students.txt");
    for (const auto& s : v)
        file << s.id << "," 
             << s.name << ","
             << s.age << ","
             << s.course << ","
             << s.grade << "\n";
}

vector<Student> FileManager::loadStudents() {
    vector<Student> v;
    ifstream file("students.txt");
    string line;

    while (getline(file, line)) {
        if(line.empty()) continue;
        stringstream ss(line);
        Student s;
        string temp;

        // id
        if(!getline(ss, temp, ',')) continue;
        s.id = stoi(temp);

        // name
        getline(ss, s.name, ',');

        // age
        if(!getline(ss, temp, ',')) temp = "0";
        s.age = stoi(temp);

        // course
        getline(ss, s.course, ',');

        // grade
        getline(ss, s.grade, ',');

        v.push_back(s);
    }
    return v;
}

// ---------- Teachers ----------
void FileManager::saveTeachers(const vector<Teacher>& v) {
    ofstream file("teachers.txt");
    for (const auto& t : v)
        file << t.id << "," 
             << t.name << "," 
             << t.subject << "\n";
}

vector<Teacher> FileManager::loadTeachers() {
    vector<Teacher> v;
    ifstream file("teachers.txt");
    string line;

    while (getline(file, line)) {
        if(line.empty()) continue;
        stringstream ss(line);
        Teacher t;
        string temp;

        if(!getline(ss, temp, ',')) continue;
        t.id = stoi(temp);

        getline(ss, t.name, ',');
        getline(ss, t.subject, ',');

        v.push_back(t);
    }
    return v;
}

// ---------- Admins ----------
void FileManager::saveAdmins(const vector<Admin>& v) {
    ofstream file("admins.txt");
    for (const auto& a : v)
        file << a.username << "," 
             << a.password << "\n";
}

vector<Admin> FileManager::loadAdmins() {
    vector<Admin> v;
    ifstream file("admins.txt");
    string line;

    while (getline(file, line)) {
        if(line.empty()) continue;
        stringstream ss(line);
        Admin a;
        getline(ss, a.username, ',');
        getline(ss, a.password, ',');

        v.push_back(a);
    }
    return v;
}
