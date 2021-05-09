// Copyright (c) 2021 Brian Musembi, All rights reserved
//
// Created by Brian Musembi
// Created on May 2021
// This program determines if the grandmother will approve of the user
//     dating her grandchild

#include <iostream>
#include <string>

int main() {
    // this function will determine if the user is in the needed age range

    std::cout << "This program determines if you can date"
              << " grandmother's grandchild." << std::endl;
    std::cout << "" << std::endl;

    // variable declarations
    const int MIN_AGE = 25;
    const int MAX_AGE = 40;
    std::string userAge;
    int userAgeInt;

    // input
    std::cout << "Input your age as an integer: ";
    std::cin >> userAge;
    std::cout << "" << std::endl;

    // process
    try {
        userAgeInt = std::stoi(userAge);

        if (userAgeInt > MIN_AGE && userAgeInt < MAX_AGE) {
            // output
            std::cout << "Amazing! Grandmother approves of you"
                      << " dating her grandchild";
        } else if (userAgeInt > MIN_AGE) {
            // output
            std::cout << "Sorry, you are too old!";

        } else {
            // output
            std::cout << "Sorry, you are too young!";}
    } catch (std::invalid_argument) {
        std::cout << "That's not a number! Try again." << std::endl;
    }

    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Better luck with someone else!" << std::endl;
}
