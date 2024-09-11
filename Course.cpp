
#include "Course.h"

void Course::addPerson(Person* person) {
    persons.push_back(person);
}

Gradebook& Course::getGradebook() {
    return gradebook;
}