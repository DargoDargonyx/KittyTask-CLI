#include "groups/Group.hpp"

Group::Group(const std::string& name) {
    
    this->name = name;
}

std::string Group::getName() const {
    return name;
}

void Group::setName(const std::string& name) {
    this->name = name;
}
