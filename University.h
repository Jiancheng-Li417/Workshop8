#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include "Course.h"
#include <vector>

class University {
private:
    std::vector<Course*> courses;  
public:
    University() {}
    ~University();
    void addCourse(Course* course);
};

#endif