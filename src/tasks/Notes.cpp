#include "tasks/Notes.hpp"

Notes::Notes(int idNum, const std::string& name, const std::string& date, 
        bool status) : Task(idNum, name, date, status) {

    this->type = "Notes";
    this->grade = grade;
}

uint8_t Quiz::getGrade() const {
    return grade;
}

void Quiz::setGrade(uint8_t grade) {
    this->grade = grade;
}
