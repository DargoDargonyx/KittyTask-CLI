#include "tasks/Quiz.hpp"

Quiz::Quiz(const std::string& name, const std::string& date, 
        bool status, uint8_t grade) : Task(name, date, status) {
    
    this->grade = grade;
}

std::string Quiz::getName() const {
    return name;
}

void Quiz::setName(const std::string& name) {
    this->name = name;
}

std::string Quiz::getDate() const {
    return date;
}

void Quiz::setDate(const std::string& date) {
    this->date = date;
}

bool Quiz::getStatus() const {
    return status;
}

void Quiz::setStatus(bool status) {
    this->status = status;
}

uint8_t Quiz::getGrade() const {
    return grade;
}

void Quiz::setGrade(uint8_t grade) {
    this->grade = grade;
}
