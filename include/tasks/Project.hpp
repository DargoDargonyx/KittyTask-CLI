#ifndef PROJECT_H
#define PROJECT_H

#include "tasks/GradedTask.hpp"
#include <string>
#include <cstdint>

class Project : public GradedTask {
    public:
        Project(
            int idNum, 
            const std::string& name, 
            const std::string& date, 
            bool status,
            uint8_t grade
        );
};

#endif //PROJECT_H
