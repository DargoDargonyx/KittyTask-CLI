#include "tasks/Presentation.hpp"

Presentation::Presentation(const std::string& name, const std::string& date, 
        bool status) : Task(name, date, status) {}

std::string Presentation::getName() const {
    return name;
}

void Presentation::setName(const std::string& name) {
    this->name = name;
}

std::string Presentation::getDate() const {
    return date;
}

void Presentation::setDate(const std::string& date) {
    this->date = date;
}

bool Presentation::getStatus() const {
    return status;
}

void Presentation::setStatus(bool status) {
    this->status = status;
}
