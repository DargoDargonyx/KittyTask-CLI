#include "tasks/Homework.hpp"

Homework::Homework(const std::string& name, const std::string& date, 
        bool status, uint8_t grade) : Task(name, date, status) {
    
    this->grade = grade;
}

std::string Homework::getName() const {
    return name;
}

void Homework::setName(const std::string& name) {
    this->name = name;
}

std::string Homework::getDate() const {
    return date;
}

void Homework::setDate(const std::string& date) {
    this->date = date;
}

bool Homework::getStatus() const {
    return status;
}

void Homework::setStatus(bool status) {
    this->status = status;
}

uint8_t Homework::getGrade() const {
    return grade;
}

void Homework::setGrade(uint8_t grade) {
    this->grade = grade;
}
