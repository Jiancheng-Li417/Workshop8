
#ifndef COURSE_H
#define COURSE_H

#include "Person.h"
#include <vector>
#include "Gradebook.h"

class Course {
private:
    std::vector<Person*> persons;  
    Gradebook gradebook;
public:
    void addPerson(Person* person);
    Gradebook& getGradebook();
};

#endif
