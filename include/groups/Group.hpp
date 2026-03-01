#ifndef GROUP_H
#define GROUP_H

#include "tasks/Task.hpp"
#include <string>
#include <vector>
#include <memory>

class Group {
    protected:
        int idNum;
        std::string name;
        std::vector<Task> tasks;
        std::vector<int> taskIdList;
        std::string type;
    public:
        Group(
            int idNum, 
            const std::string& name
        );
        virtual ~Group() = default;
        virtual int getIdNum() const;
        virtual void setIdNum(int idNum);
        virtual std::string getName() const;
        virtual void setName(const std::string& name);
        virtual std::vector<Task> getTasks() const;
        virtual void setTasks(const std::vector<Task>& tasks);
        virtual void addTask(std::unique_ptr<Task> newTask);
        virtual void removeTask(int taskId);
        virtual std::vector<int> getTaskIdList() const;
        virtual std::string getType() const;
        virtual void refreshTaskIdList();
};

#endif // GROUP_H
