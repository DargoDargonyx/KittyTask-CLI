#ifndef PROGRAMMING_H
#define PROGRAMMING_H

#include "tasks/Task.hpp"
#include <string>

class Programming : public Task {
    public:
        Programming(const std::string& name, const std::string& date, bool status);
        std::string getName() const override;
        void setName(const std::string& name) override;
        std::string getDate() const override;
        void setDate(const std::string& date) override;
        bool getStatus() const override;
        void setStatus(bool status) override;
    private:
        std::string name;
        std::string date;
        bool status;
};

#endif //PROGRAMMING_H
