
#include "Student.h"
#include "Teacher.h"
#include "Date.h"
#include <iostream>

int main() {
    // Create Date objects for the students and teacher
    Date jonahStartDate(8, 16, 2018); // Date for Jonah Tyree
    Date katherineStartDate(1, 3, 2020); // Date for Katherine Walls
    Date judStartDate(6, 11, 2009); // Date for Dr. Jud Davis

    // Create students with their start dates, names, and details
    Student jonah("Jonah", "Tyree", jonahStartDate, 2022, "Engineering");
    Student katherine("Katherine", "Walls", katherineStartDate, 2024, "English");

    // Create teacher with their start date, name, and details
    Teacher jud("Jud", "Davis", judStartDate, "Christian Studies", "Associate Professor");

    // Display initial summaries for all
    jonah.summary();
    katherine.summary();
    jud.summary();

    // Modify attributes
    katherine.setMajor("Education");
    jud.setTitle("Full Professor");
    jonah.setGraduationYear(2021);

    // Display updated summaries
    std::cout << "\nUpdated Information:\n";
    jonah.summary();
    katherine.summary();
    jud.summary();

    // Display Dr. Davis's start date
    std::cout << "Dr. Davis's Start Date: " << jud.getStartDate() << std::endl;

    return 0;
}


