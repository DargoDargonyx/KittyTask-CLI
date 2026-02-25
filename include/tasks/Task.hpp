#ifndef TASK_H
#define TASK_H

#include <string>

class Task {
    public:
        Task(const std::string& name, const std::string& date, bool status);
        virtual std::string getName() const;
        virtual void setName(const std::string& name);
        virtual std::string getDate() const;
        virtual void setDate(const std::string& date);
        virtual bool getStatus() const;
        virtual void setStatus(bool status);
    protected:
        std::string name;
        std::string date;
        bool status;
};

#endif //TASK_H
