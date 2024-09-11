#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <vector>
#include "Grade.h"

class Gradebook {
private:
    std::vector<Grade> grades;
public:
    void addGrade(const Grade& grade);
};

#endif