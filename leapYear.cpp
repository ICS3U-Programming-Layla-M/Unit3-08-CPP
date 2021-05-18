// Copyright (c) Year Layla Michel All rights reserved.
//
// Created by: Layla Michel
// Date: May 18, 2021
// This program asks the user to input a year
// and displays if it's a leap year or not

#include <iostream>
#include <string>


int main() {
    // declare variables
    int yearAsInt;
    std::string yearAsString;

    // get year from user
    std::cout << "Enter a year: ";
    std::cin >> yearAsString;
    try {
        yearAsInt = std::stoi(yearAsString);

        // check if year is a negative number
        if (yearAsInt < 0) {
            std::cout << "Please enter a valid year.\n";
        }  /* display if year is a leap year or not */ else {
            if (yearAsInt % 4 == 0) {
               if (yearAsInt % 100 == 0) {
                   if (yearAsInt % 400 == 0) {
                       std::cout << yearAsInt << " is a leap year.\n";
                   } else {
                       std::cout << yearAsInt << " is not a leap year.\n";
                   }
               } else {
                   std::cout << yearAsInt << " is a leap year.\n";
               }
            } else {
               std::cout << yearAsInt << " is not a leap year.\n";
            }
        }
    }  // error message
    catch (std::invalid_argument) {
        std::cout << "Please enter a valid year.\n";
    }
}
