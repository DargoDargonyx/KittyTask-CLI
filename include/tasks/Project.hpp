#ifndef PROJECT_H
#define PROJECT_H

#include "tasks/Task.hpp"
#include <string>
#include <cstdint>

class Project : public Task {
    private:
        uint8_t grade;
    public:
        Project(int idNum, const std::string &name, 
                const std::string &date, bool status);
        uint8_t getGrade() const;
        void setGrade(uint8_t grade);
};

#endif //PROJECT_H
