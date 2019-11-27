// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Marwan Mashaly
// Created on: October 2019
// This program calculates the area of a triangle
#include <iostream>
#include <cmath>


float areaOctagon(int side) {
    // This function will calculate the area of an octagon

    float area;

    area = (2 * (1 + sqrt(2)) * side * side);
    return area;
}


main() {
    // This function takes input from user and calls other functions

    std::string side;
    int sideCheck;
    int finalAnswer;

    while (true) {
        std::cout << "Enter the side of the octagon (cm): ";
        std::cin >> side;
        std::cout << "" << std::endl;
        try {
            sideCheck = std::stoi(side);
            std::cout << "" << std::endl;

            finalAnswer = areaOctagon(sideCheck);
            std::cout << "The area of the octagon is: " << finalAnswer
                      << "cm^2" << std::endl;
        }catch (std::invalid_argument) {
            std::cout << "Invalid Number";
            std::cout << " " << std::endl;
        }
    }
}
