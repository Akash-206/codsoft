#include<iostream>
#include <limits>

const int MAX_STUDENTS = 100;

struct Student {

std::string name;

double grade;

};

int main() {

Student students [MAX_STUDENTS];

int numStudents;

std::cout << "Enter the number of students: ";

std::cin >> numStudents;

// Input student names and grades

for (int i = 0; i < numStudents; ++i) { std::cout << "Enter name for student " << i + 1 << ": ";

std::cin.

ignore(std::numeric_limits<std::streamsize

>::max(), '\n');

std::getline(std::cin, students[i].name);

std::cout << "Enter grade for student "

<< i + 1 << ": ";

std::cin >> students[i].grade;

}

// Calculate and display average,highest, and lowest grades for each student

for (int i = 0; i < numStudents; ++i) {

std::cout << "\nStudent: " <<

students[i].name << std::endl;

std::cout << "Average Grade: " <<

students[i].grade << std::endl;

std::cout << "Highest Grade: " <<

students[i].grade << std::endl;

std::cout << "Lowest Grade: " <<

students[i].grade << std::endl;

}

return 0;

}