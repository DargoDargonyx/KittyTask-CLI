#ifndef HOMEWORK_H
#define HOMEWORK_H

#include "tasks/GradedTask.hpp"
#include <string>
#include <cstdint>

class Homework : public GradedTask {
    public:
        Homework(
            int idNum, 
            const std::string& name, 
            const std::string& date, 
            bool status,
            uint8_t grade
        );
};

#endif //HOMEWORK_H
