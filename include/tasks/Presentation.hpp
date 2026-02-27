#ifndef PRESENTATION_H
#define PRESENTATION_H

#include "tasks/Task.hpp"
#include <string>
#include <cstdint>

class Presentation : public Task {
    private:
        uint8_t grade;
    public:
        Presentation(int idNum, const std::string &name, 
                const std::string &date, bool status);
        uint8_t getGrade() const;
        void setGrade(uint8_t grade);
};

#endif //PRESENTATION_H
