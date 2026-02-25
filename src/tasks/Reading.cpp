#include "tasks/Reading.hpp"

Reading::Reading(const std::string& name, const std::string& date, 
        bool status) : Task(name, date, status) {}

std::string Reading::getName() const {
    return name;
}

void Reading::setName(const std::string& name) {
    this->name = name;
}

std::string Reading::getDate() const {
    return date;
}

void Reading::setDate(const std::string& date) {
    this->date = date;
}

bool Reading::getStatus() const {
    return status;
}

void Reading::setStatus(bool status) {
    this->status = status;
}
