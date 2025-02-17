#ifndef TEACHER_H
#define TEACHER_H


#include "Person.h"
#include <iostream>

class Teacher : public Person {
private:
    std::string department;
    std::string title;


public:
    Teacher(const std::string& fName, const std::string& lName, const Date& start, const std::string& dept, const std::string& t); // Parameterized constructor

    void setDepartment(const std::string& dept);
    std::string getDepartment() const;
    
    void setTitle(const std::string& t);
    std::string getTitle() const;


    void summary() const; // Outputs all details
};


#endif
