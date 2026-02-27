#include "util/GroupManager.hpp"
#include "external/json.hpp"

#include <string>
#include <iostream>
#include <fstream>
#include <filesystem>


using json = nlohmann::json;
using fs = std::filesystem;

GroupManager::GroupManager(const std::string& filepath) {

    this->filepath = filepath;
    checkDataDirectory();
    loadGroupData();
}

std::vector<Group> GroupManager::getGroups() const {
    return this->groups;
}

void GroupManager::setGroups(const std::vector<Group> &groups) {
    this->groups = groups;
}

void GroupManager::addGroup(const Group& group) {

    if (group.getIdNum() != groups.size()) {
        group.setIdNum(groups.size());
    }
    groups.push_back(group);
    int idNum = group.getIdNum();
    data[idNum]["name"] = group.getName();
    data[idNum]["type"] = group.getType();
    switch(group.getType()) {
        case "Class":
            data[idNum]["year"] = group.getYear();
            data[idNum]["semester"] = semesterToJsonStr(group.getSemester());
            data[idNum]["topic"] = topicToJsonStr(group.getTopic());
            data[idNum]["grade"] = group.getGrade();
            break;
        case "DevWork":
            data[idNum]["year"] = group.getYear();
            data[idNum]["topic"] = topicToJsonStr(group.getTopic());
            break;
        case "Research":
            data[idNum]["year"] = group.getYear();
            data[idNum]["semester"] = semesterToJsonStr(group.getSemester());
            data[idNum]["topic"] = topicToJsonStr(group.getTopic());
            break;
        case "SelfStudy":
            data[idNum]["year"] = group.getYear();
            data[idNum]["semester"] = semesterToJsonStr(group.getSemester());
            data[idNum]["topic"] = topicToJsonStr(group.getTopic());
            break;
        default:
    }
}

void GroupManager::removeGroup(Group group) {}



GroupManager::checkDataDirectory() {
    try {
        bool dataCreated = fs::create_directories(filepath);
        if (dataCreated) {
            std::cout << "Directory created inside of application: " << filepath << std::endl;
            try {
                bool tasksCreated = fs::create_directories(filepath + "/tasks");
                if (created) {
                    std::cout << "Directory created inside of application: " 
                              << filepath
                              << "/tasks"
                              << std::endl;
                }
            } catch (const fs::filesystem_error& e) {
                std::cerr << "ERROR when creating directory \"/data/tasks\" inside of application: " 
                          << e.what() 
                          << std::endl;
            }
        }
    } catch (const fs::filesystem_error& e) {
        std::cerr << "ERROR when creating \"/data\" directory inside of application: " 
                  << e.what() 
                  << std::endl;
    }
}


void GroupManager::loadGroupData() {

    std::cout << "Loading JSON group data file..." << std::endl;
    std::ifstream file(filepath + "groupData.json");
    if (file.is_open()) {
        this->data = json::parse(file);
        std::cout << "Loaded JSON group data file" << std::endl;
    } else {
        cerr << "ERROR when trying to read groupData.json file"
    }
    file.close();
    
    for (int i = 0; i < data.length; i++) {
        groups.push_back(buildGroup(data[i]));
    }
}


void GroupManager::saveGroupData() {

    std::cout << "Saving JSON group data file..." << std::endl;
    std::ofstream file(filepath + "groupData.json");
    if (file.is_open()) {
        file << std::setw(4) << data << std::endl;
        std::cout << "Saved JSON group data file" << std::endl;
    } else {
        cerr << "ERROR when trying to write to groupData.json file"
    }
    file.close();
}


Group GroupManager::buildGroup(const int groupId) {
    Group group;
    switch(data[groupId]["type"]) {
        case "Class":
            group = Class(
                groupId,
                data[groupId]["name"],
                data[groupId]["year"],
                jsonStrToSemester(groupId),
                jsonStrToTopic(groupId),
                data[groupId]["grade"]
            );
            break;
        case "DevWork":
            group = DevWork(
                groupId,
                data[groupId]["name"],
                data[groupId]["year"],
                jsonStrToTopic(groupId)
            );
            break;
        case "Research":
            group = Research(
                groupId,
                data[groupId]["name"],
                data[groupId]["year"],
                jsonStrToSemester(groupId),
                jsonStrToTopic(groupId)
            );
            break;
        case "SelfStudy":
            group = SelfStudy(
                groupId,
                data[groupId]["name"],
                data[groupId]["year"],
                jsonStrToSemester(groupId),
                jsonStrToTopic(groupId)
            );
            break;
        case "Default":
            group = Group(
                groupId,
                data[groupId]["name"]
            );
            break;
        default:
            std::cout << "No known class for \"" <<
                      << data[groupId]["name"]
                      << "\", using a default class of Group instead with only a name field."
                      << std::endl;
            group = Group(
                groupId,
                data[groupId]["name"]
            );
    }

    std::string idStr = static_cast<std::string>groupId;
    std::string filename = filepath
            + "/tasks/group"
            + idStr
            + "_tasks"
            + ".json"
    std::cout << "Loading JSON group " 
              << idStr 
              << " file..." 
              << std::endl;
    std::ifstream file(filename);
    if (file.is_open()) {
        taskfile = json::parse(file);
        std::cout << "Loaded JSON \"group"
                  << idStr
                  << "_tasks\" data file" 
                  << std::endl;
    } else {
        std::cerr << "ERROR when trying to read \"group"
                  << idStr
                  << "_tasks.json\" file"
                  << std::endl;
    }
    file.close();       
        
    for (int i = 0; i < data[groupId]["tasks"].length; i++) {
        group.addTask(buildTask(taskfile, data[groupId]["tasks"][i]));
    }
    return group;
}


Task GroupManager::buildTask(const json taskfile, const int taskId) {
    Task task;
    switch(taskfile[taskId]) {
        case "Chore":
            task = Chore(
                taskId,
                taskfile[taskId]["name"],
                taskfile[taskId]["date"],
                taskfile[taskId]["status"]
            );
            break;
        case "Exam":
            task = Exam(
                taskId,
                taskfile[taskId]["name"],
                taskfile[taskId]["date"],
                taskfile[taskId]["status"]
            );
            task.setGrade(taskfile[taskId]["grade"]);
            break;
        case "Homework":
            task = Homework(
                taskId,
                taskfile[taskId]["name"],
                taskfile[taskId]["date"],
                taskfile[taskId]["status"]
            );
            task.setGrade(taskfile[taskId]["grade"]);
            break;
        case "Lab":
            task = Lab(
                taskId,
                taskfile[taskId]["name"],
                taskfile[taskId]["date"],
                taskfile[taskId]["status"]
            );
            task.setGrade(taskfile[taskId]["grade"]);
            break;
        case "LabAssignment":
            task = LabAssignment(
                taskId,
                taskfile[taskId]["name"],
                taskfile[taskId]["date"],
                taskfile[taskId]["status"]
            );
            task.setGrade(taskfile[taskId]["grade"]);
            break;
        case "Notes":
            task = Notes(
                taskId,
                taskfile[taskId]["name"],
                taskfile[taskId]["date"],
                taskfile[taskId]["status"]
            );
            task.setGrade(taskfile[taskId]["grade"]);
            break;
        case "Presentation":
            task = Presentation(
                taskId,
                taskfile[taskId]["name"],
                taskfile[taskId]["date"],
                taskfile[taskId]["status"]
            );
            task.setGrade(taskfile[taskId]["grade"]);
            break;
        case "Programming":
            task = Programming(
                taskId,
                taskfile[taskId]["name"],
                taskfile[taskId]["date"],
                taskfile[taskId]["status"]
            );
            task.setGrade(taskfile[taskId]["grade"]);
            break;
        case "Project":
            task = Project(
                taskId,
                taskfile[taskId]["name"],
                taskfile[taskId]["date"],
                taskfile[taskId]["status"]
            );
            task.setGrade(taskfile[taskId]["grade"]);
            break;
        case "Quiz":
            task = Quiz(
                taskId,
                taskfile[taskId]["name"],
                taskfile[taskId]["date"],
                taskfile[taskId]["status"]
            );
            task.setGrade(taskfile[taskId]["grade"]);
            break;
        case "Reading":
            task = Reading(
                taskId,
                taskfile[taskId]["name"],
                taskfile[taskId]["date"],
                taskfile[taskId]["status"]
            );
            task.setGrade(taskfile[taskId]["grade"]);
            break;
        case "Default":
            group = Group(
                data[groupId]["idNum"]
                data[groupId]["name"]
            );
            break;
        default:
            Task task = Task(
                taskId,
                taskfile[taskId]["name"],
                taskfile[taskId]["date"],
                taskfile[taskId]["status"]
            );
    }
    return task;
}


Semester GroupManager::jsonStrToSemester(const int groupId) {
    enum Semester semester;
    switch(data[groupId]["semester"]) {
        case "Spring":
            semester = SPRING;
            break;
        case "Fall":
            semester = FALL;
            break;
        case "Summer":
            semester = SUMMER;
            break;
        default:
            std::cerr << "ERROR when reading from group data JSON, unknown semester \"" 
                      << data[groupId]["semester"] 
                      << "\" from the group " 
                      << data[groupId]["name"] 
                      << std::endl;
    }
    return semester;
}


Topic GroupManager::jsonStrToTopic(const int groupId) {
    enum Topic topic;
    switch(data[groupId]["topic"]) {
        case "Math":
            topic = MATH;
            break;
        case "CS":
            topic = CS;
            break;
        case "Physics":
            topic = PHYSICS;
            break;
        case "Chemistry":
            topic = CHEM;
            break;
        case "Biology":
            topic = BIO;
            break;
        default:
            std::cerr << "ERROR when reading from group data JSON, unknown topic \"" 
                      << data[groupId]["topic"] 
                      << "\" from the group " 
                      << data[groupId]["name"] 
                      << std::endl;
    }
    return topic;
}


std::string semesterToJsonStr(const Semester &semester) {
    std::string str;
    switch(Semester) {
        case Semester::SPRING:
            str = "Spring";
            break;
        case Semester::FALL:
            str = "Fall";
            break;
        case Semester::SUMMER:
            str = "Summer";
            break;
        default:
            cerr << "ERROR when trying to translate \""
                 << Semester
                 << "\" into a string for saving into a JSON"
                 << std::endl;
    }
    return str;
}


std::string topicToJsonStr(const Topic &topic) {
    std::string str;
    switch(Topic) {
        case Topic::MATH:
            str = "Math";
            break;
        case Topic::CS:
            str = "CS";
            break;
        case Topic::PHYSICS:
            str = "Physics";
            break;
        case Topic::CHEM:
            str = "Chemistry";
            break;
        case Topic::BIO:
            str = "Biology";
            break;
        default:
            cerr << "ERROR when trying to translate \""
                 << Topic
                 << "\" into a string for saving into a JSON"
                 << std::endl;
    }
    return str;
}
