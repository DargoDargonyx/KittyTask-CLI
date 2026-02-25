#include "tasks/Task.hpp"

Task::Task(const std::string& name, const std::string& date, 
        bool status) {
    
    this->name = name;
    this->date = date;
    this->status = status;
}

std::string Task::getName() const {
    return name;
}

void Task::setName(const std::string& name) {
    this->name = name;
}

std::string Task::getDate() const {
    return date;
}

void Task::setDate(const std::string& date) {
    this->date = date;
}

bool Task::getStatus() const {
    return status;
}

void Task::setStatus(bool status) {
    this->status = status;
}
