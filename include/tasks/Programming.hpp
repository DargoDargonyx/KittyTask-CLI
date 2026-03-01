#ifndef PROGRAMMING_H
#define PROGRAMMING_H

#include "tasks/GradedTask.hpp"
#include <string>
#include <cstdint>

class Programming : public GradedTask {
    public:
        Programming(
            int idNum, 
            const std::string& name, 
            const std::string& date, 
            bool status,
            uint8_t grade
        );
};

#endif //PROGRAMMING_H
