#ifndef PERSON_H
#define PERSON_H


#include "Date.h"
#include <string>
#include <iostream>

class Person {
protected:
    Date startDate;
    std::string firstName;
    std::string lastName;


public:
    Person(); // Default constructor
    Person(const std::string& fName, const std::string& lName, const Date& start); // Specific constructor


    std::string getFirstName() const;
    void setFirstName(const std::string& fName);
    
    std::string getLastName() const;
    void setLastName(const std::string& lName);


    Date getStartDate() const;
    void setStartDate(const Date& start);
};


#endif
