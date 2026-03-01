#include "groups/Group.hpp"

int DFAULT_INITIAL_LIST_CAP = 20;

Group::Group(int idNum, const std::string& name) 
    : idNum(idNum), name(name) {

    this->type = "Default";
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

void Group::addTask(std::unique_ptr<Task> newTask) {

    Task task = *newTask;
    tasks.push_back(task);
    taskIdList.push_back(task.getIdNum());
    refreshTaskIdList();
}

void Group::removeTask(int taskId) {}

std::vector<int> Group::getTaskIdList() const {
    return taskIdList;
}

std::string Group::getType() const {
    return type;
}

void Group::refreshTaskIdList() {
    
    for (int i = 0; i < tasks.size(); i++) {
        taskIdList[i] = tasks[i].getIdNum();
    }
}
