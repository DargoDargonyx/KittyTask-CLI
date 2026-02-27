#ifndef PROGRAMMING_H
#define PROGRAMMING_H

#include "tasks/Task.hpp"
#include <string>
#include <cstdint>

class Programming : public Task {
    private:
        uint8_t grade;
    public:
        Programming(int idNum, const std::string &name, 
                const std::string &date, bool status);
        uint8_t getGrade() const;
        void setGrade(uint8_t grade);
};

#endif //PROGRAMMING_H
