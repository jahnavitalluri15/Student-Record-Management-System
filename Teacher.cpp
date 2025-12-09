#include "FileManager.hpp"
#include "Models.hpp"
#include "Student.hpp"
#include <iostream>
#include <vector>
using namespace std;

void teacherMenu() {
    vector<Student> students = FileManager::loadStudents();
    int choice;

    while(true){
        cout << "\n--- Teacher Menu ---\n";
        cout << "1. View Students\n2. Exit\nChoice: ";
        cin >> choice;

        if(choice == 1){
            cout << "\nStudents List:\n";
            for(const auto &s : students)
                cout << s.id << " " << s.name << " " << s.age << " " << s.course << " " << s.grade << endl;
        }
        else break;
    }
}
