#include "FileManager.hpp"
#include "Models.hpp"
#include "Student.hpp"
#include <iostream>
#include <vector>
using namespace std;

void adminMenu() {
    vector<Student> students = FileManager::loadStudents();
    vector<Teacher> teachers = FileManager::loadTeachers();
    vector<Admin> admins = FileManager::loadAdmins();

    int choice;
    string username, password;
    
    cout << "Enter Admin username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    bool loggedIn = false;
    for(auto &a : admins){
        if(a.username == username && a.password == password){
            loggedIn = true;
            break;
        }
    }

    if(!loggedIn){
        cout << "Invalid credentials!\n";
        return;
    }

    while(true){
        cout << "\n--- Admin Menu ---\n";
        cout << "1. Add Student\n2. View Students\n3. Add Teacher\n4. View Teachers\n5. Exit\nChoice: ";
        cin >> choice;

        if(choice == 1){
            Student s;
            cout << "Enter ID: "; cin >> s.id;
            cout << "Enter Name: "; cin >> s.name;
            cout << "Enter Age: "; cin >> s.age;
            cout << "Enter Course: "; cin >> s.course;
            cout << "Enter Grade: "; cin >> s.grade;
            students.push_back(s);
            FileManager::saveStudents(students);
        }
        else if(choice == 2){
            cout << "\nStudents List:\n";
            for(auto &s : students)
                cout << s.id << " " << s.name << " " << s.age << " " << s.course << " " << s.grade << endl;
        }
        else if(choice == 3){
            Teacher t;
            cout << "Enter ID: "; cin >> t.id;
            cout << "Enter Name: "; cin >> t.name;
            cout << "Enter Subject: "; cin >> t.subject;
            teachers.push_back(t);
            FileManager::saveTeachers(teachers);
        }
        else if(choice == 4){
            cout << "\nTeachers List:\n";
            for(auto &t : teachers)
                cout << t.id << " " << t.name << " " << t.subject << endl;
        }
        else break;
    }
}
