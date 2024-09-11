#ifndef GRADE_H
#define GRADE_H

class Grade {
private:
    double value;
public:
    Grade(double val) : value(val) {}
    double getValue() { return value; }
};

#endif