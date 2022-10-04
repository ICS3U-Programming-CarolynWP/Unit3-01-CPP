// Copyright Carolyn
// Created by: Carolyn Webster Pless
// Created on: 22/10/03
// Takes user input for the subtotal of an item
// And displays the tax and total with the GST
// from Nunavut

#include <iostream>

int main() {
    // GST constant
    const float GST = .05;

    // variables
    float cost;
    float tax;
    float total;

    // title
    std::cout << "Cost and Tax in Nunavut\n";

    // user input
    std::cout << "Enter the subtotal of your item : ";
    std::cin >> cost;

    // calculations
    tax = cost * GST;
    total = cost + tax;

    // output
    std::cout << "The tax will be $" << total << "!\n";
    std::cout << "Your total cost is $" << total << "!\n";
}
