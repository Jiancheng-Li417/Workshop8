#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
protected:
    std::string name;
public:
    Person(std::string name) : name(name) {}
    virtual ~Person() {}
    std::string getName() { return name; }
};

#endif