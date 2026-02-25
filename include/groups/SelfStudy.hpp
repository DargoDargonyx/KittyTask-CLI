#ifndef SELFSTUDY_H
#define SELFSTUDY_H

#include "groups/Group.hpp"
#include "util/Semester.hpp"
#include "util/Topic.hpp"
#include <string>
#include <cstdint>

class SelfStudy : public Group {
    public:
        SelfStudy(const std::string& name, uint8_t year, 
                const Semester& semester, const Topic& topic);
        std::string getName() const override;
        void setName(const std::string& name) override;
        uint8_t getYear() const;
        void setYear(uint8_t year);
        Semester getSemester() const;
        void setSemester(const Semester& semester);
        Topic getTopic() const;
        void setTopic(const Topic& topic);
    private:
        std::string name;
        uint8_t year;
        Semester semester;
        Topic topic;
};

#endif //SELFSTUDY_H
