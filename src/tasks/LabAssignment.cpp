#include "tasks/LabAssignment.hpp"

LabAssignment::LabAssignment(const std::string& name, const std::string& date, 
        bool status, uint8_t grade)  : Task(name, date, status) {
    
    this->grade = grade;
}

std::string LabAssignment::getName() const {
    return name;
}

void LabAssignment::setName(const std::string& name) {
    this->name = name;
}

std::string LabAssignment::getDate() const {
    return date;
}

void LabAssignment::setDate(const std::string& date) {
    this->date = date;
}

bool LabAssignment::getStatus() const {
    return status;
}

void LabAssignment::setStatus(bool status) {
    this->status = status;
}

uint8_t LabAssignment::getGrade() const {
    return grade;
}

void LabAssignment::setGrade(uint8_t grade) {
    this->grade = grade;
}
