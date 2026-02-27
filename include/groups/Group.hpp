#ifndef GROUP_H
#define GROUP_H

#include "tasks/Task.hpp"
#include <string>
#include <vector>

class Group {
    protected:
        int idNum;
        std::string name;
        std::vector<Task> tasks;
        int[] taskList;
        std::string type;
    public:
        Group(int idNum, const std::string &name);
        virtual ~Group() = default;
        int getIdNum(int idNum) const;
        void setIdNum();
        std::string getName() const;
        void setName(const std::string &name);
        std::vector<Task> getTasks() const;
        void setTasks(const std::vector<Task> &tasks);
        int[] getTaskList() const;
        std::string getType() const;
        void refreshTaskList();
};

#endif // GROUP_H
