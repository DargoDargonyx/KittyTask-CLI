#ifndef READING_H
#define READING_H

#include "tasks/Task.hpp"
#include <string>
#include <cstdint>

class Reading : public Task {
    private:
        uint8_t grade;
    public:
        Reading(int idNum, const std::string &name, 
                const std::string &date, bool status);
        uint8_t getGrade() const;
        void setGrade(uint8_t grade);
};

#endif //READING_H
