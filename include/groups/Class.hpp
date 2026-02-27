#ifndef CLASS_H
#define CLASS_H

#include "groups/Group.hpp"
#include "util/Semester.hpp"
#include "util/Topic.hpp"
#include <string>
#include <cstdint>

class Class : public Group {
    private:
        uint8_t year;
        Semester semester;
        Topic topic;
        int grade;
    public:
        Class(int idNum, const std::string &name, uint8_t year, 
                const Semester &semester, const Topic &topic);
        uint8_t getYear() const;
        void setYear(uint8_t year);
        Semester getSemester() const;
        void setSemester(const Semester &semester);
        Topic getTopic() const;
        void setTopic(const Topic &topic);
        int getGrade() const;
        void setGrade(int grade);
};

#endif // CLASS_H
