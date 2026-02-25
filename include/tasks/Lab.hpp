#ifndef LAB_H
#define LAB_H

#include "tasks/Task.hpp"
#include <string>
#include <cstdint>

class Lab : public Task {
    public:
        Lab(const std::string& name, const std::string& date, 
                bool status, uint8_t grade);
        std::string getName() const override;
        void setName(const std::string& name) override;
        std::string getDate() const override;
        void setDate(const std::string& date) override;
        bool getStatus() const override;
        void setStatus(bool status) override;
        uint8_t getGrade() const;
        void setGrade(uint8_t grade);
    private:
        std::string name;
        std::string date;
        bool status;
        uint8_t grade;
};

#endif //LAB_H
