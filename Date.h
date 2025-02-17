#ifndef DATE_H
#define DATE_H


#include <iostream>


class Date {
private:
    int day;
    int month;
    int year;


public:
    Date(); // Default constructor
    Date(int d, int m, int y); // Specific constructor

    friend std::ostream& operator<<(std::ostream& out, const Date& date); // Output stream operator
};


#endif
