#include "tasks/Project.hpp"

Project::Project(int idNum, const std::string& name, 
        const std::string& date, bool status, uint8_t grade) 
    : GradedTask(idNum, name, date, status, grade) {

    this->type = "Project";
}
