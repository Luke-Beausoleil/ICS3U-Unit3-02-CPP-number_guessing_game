// Copyright (c) 2021 Luke Beausoleil All rights reserved
//
// Created by: Luke Beausoleil
// Created on: April 2021
// This program lets the user play a number guessing game

#include <iostream>

int main() {
    // this gets user to guess a number and tells them if it's correct

    // constants
    const int CORRECT = 5;
    const int SMALL_DIFFERENCE = 1;

    // variable
    int guessedNumber;

    // input
    std::cout << "Guess a number from 0 - 9: ";
    std::cin >> guessedNumber;

    // process & output
    if (guessedNumber < CORRECT) {
        std::cout << "\nToo Low, Try Again!" << std::endl;
    }
    if (guessedNumber == CORRECT) {
        std::cout << "\nCorrect!" << std::endl;
    }
    if (guessedNumber > CORRECT) {
        std::cout << "\nToo High, Try Again!" << std::endl;
    }
    if (abs(guessedNumber - CORRECT) == SMALL_DIFFERENCE) {
        std::cout << "You're Very Close!" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
