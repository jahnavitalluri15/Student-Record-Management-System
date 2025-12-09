#include "Timetable.hpp"

void Timetable::save(const std::vector<TimetableEntry>& v){
    std::ofstream f("timetable.dat");
    for(auto &t : v) f<<t.day<<" "<<t.subject<<" "<<t.time<<"\n";
}

std::vector<TimetableEntry> Timetable::load(){
    std::vector<TimetableEntry> v;
    std::ifstream f("timetable.dat");
    TimetableEntry t;
    while(f>>t.day>>t.subject>>t.time) v.push_back(t);
    return v;
}
