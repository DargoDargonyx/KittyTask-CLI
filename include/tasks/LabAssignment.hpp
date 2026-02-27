#ifndef LABASSIGNMENT_H
#define LABASSIGNMENT_H

#include "tasks/Task.hpp"
#include <string>
#include <cstdint>

class LabAssignment : public Task {
    private:
        uint8_t grade;
    public:
        LabAssignment(int idNum, const std::string &name, 
                const std::string &date, bool status);
        uint8_t getGrade() const;
        void setGrade(uint8_t grade);
};

#endif //LABASSIGNMENT_H
