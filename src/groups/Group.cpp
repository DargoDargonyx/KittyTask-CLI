#include "groups/Group.hpp"

int DFAULT_INITIAL_LIST_CAP = 20;

Group::Group(int idNum, const std::string& name) 
    : idNum(idNum), name(name) {

    this->type = "Default";
    int[DEFAULT_INITIAL_LIST_CAP] lst = {0};
    this->taskList = lst;
}

int Group::getIdNum() const {
    return idNum;
}

void Group::setIdNum(int idNum) {
    this->idNum = idNum;
}

std::string Group::getName() const {
    return name;
}

void Group::setName(const std::string& name) {
    this->name = name;
}

std::vector<Task> Group::getTasks() const {
    return tasks;
}

void Group::setTasks(const std::vector<Task> &tasks) {
    this->tasks = tasks;
}

int[] Group::getTaskList() const {
    return taskList;
}

std::string Group::getType() const {
    return type;
}

void Group::refreshTaskList() {
    
    if (tasksList.length < tasks.size()) {
        int[(taskList.length * 2) + 1] lst = {0}
        this->taskList = lst;
    }
    for (int i = 0; i < tasks.size(); i++) {
        taskList[i] = tasks.at(i);
    }
}
