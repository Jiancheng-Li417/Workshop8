#include "University.h"
#include "Course.h"
#include "Student.h"
#include "Instructor.h"
#include "Grade.h"
#include <iostream>
using namespace std;

int main() {
    University uni;
      
    Course* course = new Course();
    
    uni.addCourse(course);

    Student* student = new Student("John Doe");
    
    course->addPerson(student);

    Grade grade(85.5);
    student->addGrade(grade);
    
    course->getGradebook().addGrade(grade);

    cout << "Student: " << student->getName() << " received a grade of " << grade.getValue() << endl;

    delete student;
    delete course;

    return 0;
}