#include "tasks/Programming.hpp"

Programming::Programming(const std::string& name, const std::string& date, 
        bool status) : Task(name, date, status) {}

std::string Programming::getName() const {
    return name;
}

void Programming::setName(const std::string& name) {
    this->name = name;
}

std::string Programming::getDate() const {
    return date;
}

void Programming::setDate(const std::string& date) {
    this->date = date;
}

bool Programming::getStatus() const {
    return status;
}

void Programming::setStatus(bool status) {
    this->status = status;
}
