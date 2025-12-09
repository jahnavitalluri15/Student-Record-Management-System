#ifndef TIMETABLE_HPP
#define TIMETABLE_HPP

#include <string>
#include <vector>
#include <fstream>

struct TimetableEntry {
    std::string day;
    std::string subject;
    std::string time;
};

class Timetable {
public:
    static void save(const std::vector<TimetableEntry>& v);
    static std::vector<TimetableEntry> load();
};

#endif
