#include "Date.h"


// Default constructor that initializes to January 1, 1970
Date::Date() : day(1), month(1), year(1970) {}


// Constructor that allows setting a specific date
Date::Date(int d, int m, int y) : day(d), month(m), year(y) {}


// Output stream operator to print date in M/D/Y format
std::ostream& operator<<(std::ostream& out, const Date& date) {
    out << date.month << "/" << date.day << "/" << date.year;
    return out;
}
