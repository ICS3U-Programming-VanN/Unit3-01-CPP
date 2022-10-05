// Copyright (c) 2022 Van Nguyen All rights reserved.
//
// Created by: Van Nguyen
// Date: October 4, 2022
// This program calculates and displays the subtotal with tax
// using the Alberta tax rate

#include <iomanip>
#include <iostream>

int main() {
    // Declared Constants
    const float ALBERTA_GST = 0.05;

    // Initialize Variables
    float subtotal, tax, total;

    // Asks user for unit of measurement
    std::cout << "Enter your subtotal: $";
    std::cin >> subtotal;

    // Calculates the tax and total
    tax = subtotal * ALBERTA_GST;
    total = subtotal + tax;

    // Displays the tax and total to the user
    std::cout << "The tax (Alberta GST) you must pay: $" << std::fixed
    << std::setprecision(2) << std::setfill('0') << tax << std::endl;
    std::cout << "Your total cost: $" << std::fixed
    << std::setprecision(2) << std::setfill('0') << total << std::endl;
}
