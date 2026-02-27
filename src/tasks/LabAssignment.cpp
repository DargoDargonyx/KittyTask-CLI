#include "tasks/LabAssignment.hpp"

LabAssignment::LabAssignment(int idNum, const std::string& name, const std::string& date, 
        bool status)  : Task(idNum, name, date, status) {
   
    this->type = "LabAssignment";
    this->grade = -1;
}

uint8_t LabAssignment::getGrade() const {
    return grade;
}

void LabAssignment::setGrade(uint8_t grade) {
    this->grade = grade;
}
