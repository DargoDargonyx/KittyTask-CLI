#ifndef TASK_H
#define TASK_H

#include <string>

class Task {
    protected:
        int idNum;
        std::string name;
        std::string date;
        bool status;
        std::string type;
    public:
        Task(int idNum, const std::string &name, 
                const std::string &date, bool status);
        int getIdNum() const;
        void setIdNum(int idNum);
        std::string getName() const;
        void setName(const std::string &name);
        std::string getDate() const;
        void setDate(const std::string &date);
        bool getStatus() const;
        void setStatus(bool status);
        std::string getType() const; 
};

#endif //TASK_H
