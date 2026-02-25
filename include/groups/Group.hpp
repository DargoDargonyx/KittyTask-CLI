#ifndef GROUP_H
#define GROUP_H

#include <string>

class Group {
    public:
        Group(const std::string& name);
        virtual std::string getName() const;
        virtual void setName(const std::string& name);
    protected:
        std::string name;
};

#endif // GROUP_H
