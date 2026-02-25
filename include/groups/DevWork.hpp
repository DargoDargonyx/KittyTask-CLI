#ifndef DEVWORK_H
#define DEVWORK_H

#include "groups/Group.hpp"
#include "util/Topic.hpp"
#include <string>
#include <cstdint>

class DevWork : public Group {
    public:
        DevWork(const std::string& name, uint8_t year, const Topic& topic);
        std::string getName() const override;
        void setName(const std::string& name) override;
        uint8_t getYear() const;
        void setYear(uint8_t year);
        Topic getTopic() const;
        void setTopic(const Topic& topic);
    private:
        std::string name;
        uint8_t year;
        Topic topic;
};

#endif //DEVWORK_H
