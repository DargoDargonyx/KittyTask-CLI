#include "tasks/Exam.hpp"

Exam::Exam(int idNum, const std::string& name, const std::string& date, 
        bool status) : Task(idNum, name, date, status) {
   
    this->type = "Exam"
    this->grade = -1;
}

uint8_t Exam::getGrade() const {
    return grade;
}

void Exam::setGrade(uint8_t grade) {
    this->grade = grade;
}
