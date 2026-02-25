#include "groups/DevWork.hpp"

DevWork::DevWork(const std::string& name, uint8_t year, 
        const Topic& topic) : Group(name) {

    this->year = year;
    this->topic = topic;
}

std::string DevWork::getName() const {
    return name;
}

void DevWork::setName(const std::string& name) {
    this->name = name;
}

uint8_t DevWork::getYear() const {
    return year;
}

void DevWork::setYear(uint8_t year) {
    this->year = year;
}

Topic DevWork::getTopic() const {
    return topic;
}

void DevWork::setTopic(const Topic& topic) {
    this->topic = topic;
}
