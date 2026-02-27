#include "tasks/Quiz.hpp"

Quiz::Quiz(int idNum, const std::string& name, const std::string& date, 
        bool status) : Task(idNum, name, date, status) {

    this->type = "Quiz";
    this->grade = -1;
}

uint8_t Quiz::getGrade() const {
    return grade;
}

void Quiz::setGrade(uint8_t grade) {
    this->grade = grade;
}
