#include <iostream>
#include "Student.hpp"
using namespace std;

void adminMenu();
void teacherMenu();
void studentMenu();

int main() {
    int choice;

    while (true) {
        cout << "\n--- STUDENT RECORD MANAGEMENT SYSTEM ---\n";
        cout << "1. Admin\n";
        cout << "2. Teacher\n";
        cout << "3. Student\n";
        cout << "4. Exit\n";
        cout << "Choose: ";
        cin >> choice;

        switch(choice) {
            case 1:
                adminMenu();
                break;
            case 2:
                teacherMenu();
                break;
            case 3:
                studentMenu();
                break;
            case 4:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    }
}
