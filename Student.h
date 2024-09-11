#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <vector>
#include "Grade.h"

class Student : public Person {
private:
    std::vector<Grade> grades;  
public:
    Student(std::string name) : Person(name) {}
    void addGrade(const Grade& grade);
};

#endif