#ifndef HOMEWORK_H
#define HOMEWORK_H

#include "tasks/Task.hpp"
#include <string>
#include <cstdint>

class Homework : public Task {
    private:
        uint8_t grade;
    public:
        Homework(int idNum, const std::string &name, 
                const std::string &date, bool status);
        uint8_t getGrade() const;
        void setGrade(uint8_t grade);
};

#endif //HOMEWORK_H
