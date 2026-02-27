#ifndef EXAM_H
#define EXAM_H

#include "tasks/Task.hpp"
#include <string>
#include <cstdint>

class Exam : public Task {
    private:
        uint8_t grade;
    public:
        Exam(int idNum, const std::string &name, 
                const std::string &date, bool status);
        uint8_t getGrade() const;
        void setGrade(uint8_t grade);
};

#endif //EXAM_H
