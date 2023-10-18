// Copyright (c) 2023 Julien Lamoureux All rights reserved.
// .
// Created by: Julien Lamoureux
// Date: October 13, 2023
// This program is a number guessing  game for an integer between 0 and 9

#include <cstdlib>
#include <iostream>

int main() {
    // declare variables
    int someRandomNumber, userGuess;

    // initialize random seed
    srand((unsigned)time(NULL));

    // generate a random number between 0 and 9
     someRandomNumber = rand_r() % 9 + 0;

    // get the user guess
    std ::cout << "An integer has been chosen from 0 to 9." << std::endl;
    std::cout << "What do you think the correct integer is: ";
    std::cin >> userGuess;

    // if the user gets the number right, tell them they were right
    if (userGuess == someRandomNumber) {
        std ::cout << "Your guess was right!" << std::endl;
    } else {
        // otherwise, tell them they were wrong
        std ::cout << "Your guess was wrong! The answer was " <<
        someRandomNumber << "." << std::endl;
    }
}
