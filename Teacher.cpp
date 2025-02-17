
#include "Teacher.h"
#include <iostream>


Teacher::Teacher(const std::string& fName, const std::string& lName, const Date& start, const std::string& dept, const std::string& t)
    : Person(fName, lName, start), department(dept), title(t){}

void Teacher::setDepartment(const std::string& dept) { department = dept; }
std::string Teacher::getDepartment() const { return department; }

void Teacher::setTitle(const std::string& t) { title = t; }
std::string Teacher::getTitle() const { return title; }

void Teacher::summary() const {
    std::cout << "Name: " << firstName << " " << lastName << "\n"
              << "Start Date: " << startDate << "\n"
              << "Department: " << department << "\n"
              << "Title: " << title << std::endl;
}


