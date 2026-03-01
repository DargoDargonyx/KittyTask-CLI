#ifndef LAB_H
#define LAB_H

#include "tasks/GradedTask.hpp"
#include <string>
#include <cstdint>

class Lab : public GradedTask {
    public:
        Lab(
            int idNum, 
            const std::string& name, 
            const std::string& date, 
            bool status,
            uint8_t grade
        );
};

#endif //LAB_H
