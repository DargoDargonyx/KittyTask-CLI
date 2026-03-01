#include "tasks/GradedTask.hpp"

GradedTask::GradedTask(int idNum, const std::string& name, 
    const std::string& date, bool status, uint8_t grade)
    : Task(idNum, name, date, status) {

    this->type = "GradedTask";
    this->grade = grade;
}

uint8_t GradedTask::getGrade() const {
    return grade;
}

void GradedTask::setGrade(uint8_t grade) {
    this->grade = grade;
}
