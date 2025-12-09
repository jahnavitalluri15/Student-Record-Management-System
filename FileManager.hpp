#ifndef FILEMANAGER_HPP
#define FILEMANAGER_HPP

#include <vector>
#include <fstream>
#include "Student.hpp"
#include "Models.hpp"

class FileManager {
public:
    // Students
    static void saveStudents(const std::vector<Student>& v);
    static std::vector<Student> loadStudents();

    // Teachers
    static void saveTeachers(const std::vector<Teacher>& v);
    static std::vector<Teacher> loadTeachers();

    // Admins
    static void saveAdmins(const std::vector<Admin>& v);
    static std::vector<Admin> loadAdmins();
};

#endif
