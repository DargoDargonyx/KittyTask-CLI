#ifndef LAB_H
#define LAB_H

#include "tasks/Task.hpp"
#include <string>
#include <cstdint>

class Lab : public Task {
    private:
        uint8_t grade;
    public:
        Lab(int idNum, const std::string& name, 
                const std::string &date, bool status);
        uint8_t getGrade() const;
        void setGrade(uint8_t grade);
};

#endif //LAB_H
