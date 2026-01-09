#include <iostream>
#include <vector>
#include <limits>
#include "student.h"
using namespace std;

void addStudent(vector<Student>& list) {
    string name;
    int id;
    double gpa;

    cout << "Name: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, name);

    cout << "ID: ";
    cin >> id;

    cout << "GPA: ";
    cin >> gpa;

    list.emplace_back(name, id, gpa);
    cout << "Student added successfully!\n";
}

void listStudents(const vector<Student>& list) {
    if (list.empty()) {
        cout << "No students found.\n";
        return;
    }
    cout << "\n--- Student Records ---\n";
    for (const auto& s : list) {
        s.display();
    }
}

void searchStudent(const vector<Student>& list) {
    int id;
    cout << "Enter student ID to search: ";
    cin >> id;

    for (const auto& s : list) {
        if (s.getId() == id) {
            cout << "\nStudent found:\n";
            s.display();
            return;
        }
    }
    cout << "Student not found.\n";
}

int main() {
    vector<Student> students;
    int choice;

    while (true) {
        cout << "\n===== Student Manager =====\n";
        cout << "1. Add Student\n";
        cout << "2. List Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
        cout << "Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent(students);
                break;
            case 2:
                listStudents(students);
                break;
            case 3:
                searchStudent(students);
                break;
            case 4:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid option. Try again.\n";
        }
    }
}
