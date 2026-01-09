#include "student.h"
#include <iostream>

Student::Student(std::string n, int i, double g) {
    name = n;
    id = i;
    gpa = g;
}

std::string Student::getName() const { return name; }
int Student::getId() const { return id; }
double Student::getGpa() const { return gpa; }

void Student::setName(std::string n) { name = n; }
void Student::setGpa(double g) { gpa = g; }

void Student::display() const {
    std::cout << "ID: " << id 
              << " | Name: " << name 
              << " | GPA: " << gpa << std::endl;
}
