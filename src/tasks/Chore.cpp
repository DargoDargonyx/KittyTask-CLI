#include "tasks/Chore.hpp"

Chore::Chore(int idNum, const std::string& name, 
        const std::string& date, bool status) 
    : Task(idNum, name, date, status) {

    this->type = "Chore";
}
