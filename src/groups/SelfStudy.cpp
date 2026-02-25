#include "groups/SelfStudy.hpp"

SelfStudy::SelfStudy(const std::string& name, uint8_t year, 
        const Semester& semester, const Topic& topic) : Group(name) {

    this->year = year;
    this->semester = semester;
    this->topic = topic;
}

std::string SelfStudy::getName() const {
    return name;
}

void SelfStudy::setName(const std::string& name) {
    this->name = name;
}

uint8_t SelfStudy::getYear() const {
    return year;
}

void SelfStudy::setYear(uint8_t year) {
    this->year = year;
}

Semester SelfStudy::getSemester() const {
    return semester;
}

void SelfStudy::setSemester(const Semester& semester) {
    this->semester = semester;
}

Topic SelfStudy::getTopic() const {
    return topic;
}

void SelfStudy::setTopic(const Topic& topic) {
    this->topic = topic;
}
