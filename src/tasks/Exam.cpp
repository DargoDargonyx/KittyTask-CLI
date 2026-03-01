#include "tasks/Exam.hpp"

Exam::Exam(int idNum, const std::string& name, 
        const std::string& date, bool status, uint8_t grade) 
    : GradedTask(idNum, name, date, status, grade) {

    this->type = "Exam";
}
