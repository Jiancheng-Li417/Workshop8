#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"

class Instructor : public Person {
public:
    Instructor(std::string name) : Person(name) {}
};

#endif