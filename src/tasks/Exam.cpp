#include "tasks/Exam.hpp"

Exam::Exam(const std::string& name, const std::string& date, 
        bool status, uint8_t grade) : Task(name, date, status) {
    
    this->grade = grade;
}

std::string Exam::getName() const {
    return name;
}

void Exam::setName(const std::string& name) {
    this->name = name;
}

std::string Exam::getDate() const {
    return date;
}

void Exam::setDate(const std::string& date) {
    this->date = date;
}

bool Exam::getStatus() const {
    return status;
}

void Exam::setStatus(bool status) {
    this->status = status;
}

uint8_t Exam::getGrade() const {
    return grade;
}

void Exam::setGrade(uint8_t grade) {
    this->grade = grade;
}
