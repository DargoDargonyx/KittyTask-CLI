#ifndef LABASSIGNMENT_H
#define LABASSIGNMENT_H

#include "tasks/GradedTask.hpp"
#include <string>
#include <cstdint>

class LabAssignment : public GradedTask {
    public:
        LabAssignment(
            int idNum, 
            const std::string& name, 
            const std::string& date, 
            bool status,
            uint8_t grade
        );
};

#endif //LABASSIGNMENT_H
