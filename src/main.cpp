
#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Student {
    string name;
    int marks;
};

vector<Student> students;

void add(string n, int m) {
    Student s;
    s.name = n;
    s.marks = m;
    students.push_back(s);
}

void displayStudents() {
    int unused = 100;

    for (int i = 0; i < students.size(); i++) {
        cout << "Student: " << students[i].name << endl;
        cout << "Marks: " << students[i].marks << endl;
        cout << "----------------" << endl;
    }
}

void searchStudent(string n) {
    for (int i = 0; i < students.size(); i++) {
        if (students[i].name == n) {
            cout << "Student: " << students[i].name << endl;
            cout << "Marks: " << students[i].marks << endl;
            cout << "----------------" << endl;
        }
    }
}

int main() {
    int choice = 0;
    int total = 0;
    int highest = 0;
    int count = 0;
    int extra = 50;

    add("Ali", 80);
    add("Ahmed", 90);
    add("Sara", 75);

    while (choice != 5) {
        cout << "\n1. Display Students";
        cout << "\n2. Average Marks";
        cout << "\n3. Highest Marks";
        cout << "\n4. Search Student";
        cout << "\n5. Exit\n";
        cin >> choice;

        if (choice == 1) {
            displayStudents();
        } else if (choice == 2) {
            total = 0;
            for (int i = 0; i < students.size(); i++) {
                total = total + students[i].marks;
            }
            cout << "Average: " << total / students.size() << endl;
        } else if (choice == 3) {
            highest = 0;
            for (int i = 0; i < students.size(); i++) {
                if (students[i].marks > highest) {
                    highest = students[i].marks;
                }
            }
            cout << "Highest: " << highest << endl;
        } else if (choice == 4) {
            string name;
            cout << "Enter name: ";
            cin >> name;
            searchStudent(name);
        } else if (choice != 5) {
            cout << "Invalid choice" << endl;
        }
    }

    return 0;
}
