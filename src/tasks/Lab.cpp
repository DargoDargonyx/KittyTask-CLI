#include "tasks/Lab.hpp"

Lab::Lab(int idNum, const std::string& name, const std::string& date, 
        bool status) : Task(idNum, name, date, status) {
   
    this->type = "Lab";
    this->grade = -1;
}

uint8_t Lab::getGrade() const {
    return grade;
}

void Lab::setGrade(uint8_t grade) {
    this->grade = grade;
}
