/*
 * Filename: /workspaces/Cpp_Learn_Code/Module_1_Fundamentals/project_1_2_FeetToMTable.cpp
 * Path: /workspaces/Cpp_Learn_Code/Module_1_Fundamentals
 * Created Date: Thursday, January 1st 1970, 12:00:00 am
 * Author: rvargas42
 * 
 *
 */

#include <iostream>
using namespace std;

int main(void)
{
    int counter;
    int i;

    counter = 0;
    for (i=0; i <= 100; i++)
    {
        if (counter % 10 == 0)
        {
            cout << i << " feet = " << i / 3.25 << " meters\n";
            cout << "\n";
        }    
        else
            cout << i << " feet = " << i / 3.25 << " meters\n";
        counter++;
    }
    return (0);
}