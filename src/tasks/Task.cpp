#include "tasks/Task.hpp"

Task::Task(int idNum, const std::string& name, 
        const std::string& date, bool status) 
    : idNum(idNum), name(name), date(date), status(status) {

    this->type = "Default";
}

int Task::getIdNum() const {
    return idNum;
}

void Task::setIdNum() {
    this->idNum = idNum;
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

std::string Task::getType() const {
    return type;
}
