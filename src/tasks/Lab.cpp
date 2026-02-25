#include "tasks/Lab.hpp"

Lab::Lab(const std::string& name, const std::string& date, 
        bool status, uint8_t grade) : Task(name, date, status) {
    
    this->grade = grade;
}

std::string Lab::getName() const {
    return name;
}

void Lab::setName(const std::string& name) {
    this->name = name;
}

std::string Lab::getDate() const {
    return date;
}

void Lab::setDate(const std::string& date) {
    this->date = date;
}

bool Lab::getStatus() const {
    return status;
}

void Lab::setStatus(bool status) {
    this->status = status;
}

uint8_t Lab::getGrade() const {
    return grade;
}

void Lab::setGrade(uint8_t grade) {
    this->grade = grade;
}
