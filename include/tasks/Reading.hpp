#ifndef READING_H
#define READING_H

#include "tasks/GradedTask.hpp"
#include <string>
#include <cstdint>

class Reading : public GradedTask {
    public:
        Reading(
            int idNum, 
            const std::string& name, 
            const std::string& date, 
            bool status,
            uint8_t grade
        );
};

#endif //READING_H
