#include "tasks/Homework.hpp"

Homework::Homework(int idNum, const std::string& name, const std::string& date, 
        bool status) : Task(idNum, name, date, status) {
   
    this->type = "Homework";
    this->grade = -1;
}

uint8_t Homework::getGrade() const {
    return grade;
}

void Homework::setGrade(uint8_t grade) {
    this->grade = grade;
}
