#ifndef NOTES_H
#define NOTES_H

#include "tasks/GradedTask.hpp"
#include <string>
#include <cstdint>

class Notes : public GradedTask {
    public:
        Notes(
            int idNum, 
            const std::string& name, 
            const std::string& date, 
            bool status,
            uint8_t grade
        );
};

#endif //NOTES_H
