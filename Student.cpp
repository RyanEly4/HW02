#include "Student.h"
#include <iostream>


// Parameterized constructor
Student::Student(const std::string& fName, const std::string& lName, const Date& start, int gradYear, const std::string& maj)
    : Person(fName, lName, start), graduationYear(gradYear), major(maj) {}


// Getter and setter functions
void Student::setGraduationYear(int gradYear) { graduationYear = gradYear; }
int Student::getGraduationYear() const { return graduationYear; }
void Student::setMajor(const std::string& maj) { major = maj; }
std::string Student::getMajor() const { return major; }




// Summary function
void Student::summary() const {
    std::cout << "Name: " << firstName << " " << lastName << "\n";
    std::cout << "Start Date: " << startDate << "\n";
    std::cout << "Major: " << major << "\n";
    std::cout << "Graduation Year: " << graduationYear << "\n";
}
