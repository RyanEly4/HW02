#ifndef STUDENT_H
#define STUDENT_H


#include "Person.h"
#include <iostream>

class Student : public Person {
private:
    int graduationYear;
    std::string major;


public:
    Student(const std::string& fName, const std::string& lName, const Date& start, int gradYear, const std::string& maj); // Parameterized constructor

    void setGraduationYear(int gradYear);
    int getGraduationYear() const;
    void setMajor(const std::string& maj);
    std::string getMajor() const;



    void summary() const; // Outputs all details
};


#endif
