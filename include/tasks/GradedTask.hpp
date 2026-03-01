#ifndef GRADEDTASK_H
#define GRADEDTASK_H

#include "tasks/Task.hpp"
#include <string>
#include <cstdint>

class GradedTask : public Task {
    protected:
        uint8_t grade;
    public:
        GradedTask(
            int idNum, 
            const std::string& name, 
            const std::string& date, 
            bool status,
            uint8_t grade
        );
        virtual ~GradedTask() = default;
        uint8_t getGrade() const;
        void setGrade(uint8_t grade);
};

#endif //GRADEDTASK_H 
