#ifndef QUIZ_H
#define QUIZ_H

#include "tasks/GradedTask.hpp"
#include <string>
#include <cstdint>

class Quiz : public GradedTask {
    public:
        Quiz(
            int idNum, 
            const std::string& name, 
            const std::string& date, 
            bool status,
            uint8_t grade
        );
};

#endif //QUIZ_H
