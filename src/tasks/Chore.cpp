#include "tasks/Chore.hpp"

Chore::Chore(const std::string& name, const std::string& date, 
        bool status) : Task(name, date, status) {}

std::string Chore::getName() const {
    return name;
}

void Chore::setName(const std::string& name) {
    this->name = name;
}

std::string Chore::getDate() const {
    return date;
}

void Chore::setDate(const std::string& date) {
    this->date = date;
}

bool Chore::getStatus() const {
    return status;
}

void Chore::setStatus(bool status) {
    this->status = status;
}
