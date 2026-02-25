#include "tasks/Notes.hpp"

Notes::Notes(const std::string& name, const std::string& date, 
        bool status) : Task(name, date, status) {}

std::string Notes::getName() const {
    return name;
}

void Notes::setName(const std::string& name) {
    this->name = name;
}

std::string Notes::getDate() const {
    return date;
}

void Notes::setDate(const std::string& date) {
    this->date = date;
}

bool Notes::getStatus() const {
    return status;
}

void Notes::setStatus(bool status) {
    this->status = status;
}
