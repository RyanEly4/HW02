#include "Person.h"


// Default constructor
Person::Person() : firstName(""), lastName(""), startDate(Date()) {}


// Parameterized constructor
Person::Person(const std::string& fName, const std::string& lName, const Date& start)
    : firstName(fName), lastName(lName), startDate(start) {}


// Getter and setter functions
std::string Person::getFirstName() const { return firstName; }
std::string Person::getLastName() const { return lastName; }
void Person::setFirstName(const std::string& fName) { firstName = fName; }
void Person::setLastName(const std::string& lName) { lastName = lName; }


Date Person::getStartDate() const { return startDate; }
void Person::setStartDate(const Date& start) { startDate = start; }

