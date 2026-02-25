#ifndef READING_H
#define READING_H

#include "tasks/Task.hpp"
#include <string>

class Reading : public Task {
    public:
        Reading(const std::string& name, const std::string& date, bool status);
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

#endif //READING_H
