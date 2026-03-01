#ifndef PRESENTATION_H
#define PRESENTATION_H

#include "tasks/GradedTask.hpp"
#include <string>
#include <cstdint>

class Presentation : public GradedTask {
    public:
        Presentation(
            int idNum, 
            const std::string& name, 
            const std::string& date, 
            bool status,
            uint8_t grade
        );
};

#endif //PRESENTATION_H
