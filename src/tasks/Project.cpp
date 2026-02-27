#include "tasks/Project.hpp"

Project::Project(int idNum, const std::string& name, const std::string& date, 
        bool status) : Task(idNum, name, date, status) {

    this->type = "Project";
    this->grade = -1;
}

uint8_t Project::getGrade() const {
    return grade;
}

void Project::setGrade(uint8_t grade) {
    this->grade = grade;
}
