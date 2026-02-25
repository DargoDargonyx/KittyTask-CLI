#include "groups/Research.hpp"

Research::Research(const std::string& name, uint8_t year, 
        const Semester& semester, const Topic& topic) : Group(name) {

    this->year = year;
    this->semester = semester;
    this->topic = topic;
}

std::string Research::getName() const {
    return name;
}

void Research::setName(const std::string& name) {
    this->name = name;
}

uint8_t Research::getYear() const {
    return year;
}

void Research::setYear(uint8_t year) {
    this->year = year;
}

Semester Research::getSemester() const {
    return semester;
}

void Research::setSemester(const Semester& semester) {
    this->semester = semester;
}

Topic Research::getTopic() const {
    return topic;
}

void Research::setTopic(const Topic& topic) {
    this->topic = topic;
}
