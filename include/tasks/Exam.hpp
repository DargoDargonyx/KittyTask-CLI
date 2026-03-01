#ifndef EXAM_H
#define EXAM_H

#include "tasks/GradedTask.hpp"
#include <string>
#include <cstdint>

class Exam : public GradedTask {
    public:
        Exam(
            int idNum, 
            const std::string& name, 
            const std::string& date, 
            bool status,
            uint8_t grade
        );
};

#endif //EXAM_H
