#ifndef GROUPMANAGER_H
#define GROUPMANAGER_H

#include "external/json.hpp"
#include "groups/Group.hpp"
#include "tasks/Task.hpp"
#include <string>
#include <vector>

using json = nlohmann::json;

class GroupManager:
    private:
        std::string filepath;
        json data;
        std::vector<Group> groups;
        checkDataDirectory();
        void loadGroupData();
        void saveGroupData();
        Group buildGroup(const int groupId);
        Task buildTask(const json taskfile, const int taskId);
        Semester jsonStrToSemester(const int groupId);
        Topic jsonStrToTopic(const int groupId);
        std::string semesterToJsonStr(const Semester &semester);
        std::string topicToJsonStr(const Topic &topic);
    public:
        GroupManager(const std::string &filepath);
        std::vector<Task> getGroups() const;
        void setGroups(const std::vector<Group> &groups);
        void addGroup(const Group &group);
        void removeGroup(Group group);

#endif //GROUPMANAGER_H
