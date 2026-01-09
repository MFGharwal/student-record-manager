#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
private:
    std::string name;
    int id;
    double gpa;

public:
    Student(std::string n, int i, double g);

    std::string getName() const;
    int getId() const;
    double getGpa() const;

    void setName(std::string n);
    void setGpa(double g);

    void display() const;
};

#endif
