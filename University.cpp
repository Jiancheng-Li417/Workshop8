#include "University.h"

University::~University() {
    for (auto course : courses)
        delete course;
}

void University::addCourse(Course* course) {
    courses.push_back(course);
}