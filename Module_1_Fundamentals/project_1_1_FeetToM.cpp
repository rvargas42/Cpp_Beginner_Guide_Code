/*
 * Filename: /workspaces/Cpp_Learn_Code/Module_1_Fundamentals/project_1_1.cpp
 * Path: /workspaces/Cpp_Learn_Code/Module_1_Fundamentals
 * Created Date: Thursday, January 1st 1970, 12:00:00 am
 * Author: rvargas42
 * 
 * Copyright (c) 2024 Your Company
 */


#include <iostream>
//using namespace std; //this is a bad practice

int main(void)
{
    double f;
    double m;

    std::cout << "Enter amount of feet to convert: ";
    std::cin >> f;

    m = f / 3.28;
    std::cout << "Meters conversion is: " << m << " meters\n";
    return (0);
}