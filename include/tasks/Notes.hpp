#ifndef NOTES_H
#define NOTES_H

#include "tasks/Task.hpp"
#include <string>
#include <cstdint>

class Notes : public Task {
    private:
        uint8_t grade;
    public:
        Notes(int idNum, const std::string& name, 
                const std::string &date, bool status);
        uint8_t getGrade() const;
        void setGrade(uint8_t grade);
};

#endif //NOTES_H
