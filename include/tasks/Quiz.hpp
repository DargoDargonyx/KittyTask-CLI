#ifndef QUIZ_H
#define QUIZ_H

#include "tasks/Task.hpp"
#include <string>
#include <cstdint>

class Quiz : public Task {
    private:
        uint8_t grade;
    public:
        Quiz(int idNum, const std::string &name, 
                const std::string &date, bool status);
        uint8_t getGrade() const;
        void setGrade(uint8_t grade);
};

#endif //QUIZ_H
