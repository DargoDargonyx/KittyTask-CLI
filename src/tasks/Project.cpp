#include "tasks/Project.hpp"

Project::Project(const std::string& name, const std::string& date, 
        bool status, uint8_t grade) : Task(name, date, status) {
    
    this->grade = grade;
}

std::string Project::getName() const {
    return name;
}

void Project::setName(const std::string& name) {
    this->name = name;
}

std::string Project::getDate() const {
    return date;
}

void Project::setDate(const std::string& date) {
    this->date = date;
}

bool Project::getStatus() const {
    return status;
}

void Project::setStatus(bool status) {
    this->status = status;
}

uint8_t Project::getGrade() const {
    return grade;
}

void Project::setGrade(uint8_t grade) {
    this->grade = grade;
}
