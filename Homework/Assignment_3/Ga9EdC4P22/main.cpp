/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: sahum
 *
 * Created on January 19, 2020, 5:47 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    /* Freeze: Ox -362, Alcohol -173, Mercury -38, Water 32
     * boils: Ox -306, Alcohol 172, water 212, Mercury 676 
     */
    int Temp;
    
    cout << "Enter a temperature:\n";
    cin >> Temp;
    if (Temp <= -362)
    {
        cout << "Mercury will freeze\n"
            << "Water will freeze\n"
            << "Ethyl alcohol will freeze\n"
            << "Oxygen will freeze\n";
    }
    if (Temp > -362)
    {
        if (Temp <= -307)
        {
            cout << "Mercury will freeze\n"
                << "Water will freeze\n"
                << "Ethyl alcohol will freeze\n";
        }
    }
    if (Temp >= -306)
    {
        if (Temp <= -173)
        {
            cout << "Mercury will freeze\n"
                << "Water will freeze\n"
                << "Ethyl alcohol will freeze\n"
                << "Oxygen will boil\n";
        }
    }
    if (Temp >= -172)
    {
        if (Temp <= -38)
        {
            cout << "Mercury will freeze\n"
                << "Water will freeze\n"
                << "Oxygen will boil\n";
        }
    }
    if (Temp >= -37)
    {
        if(Temp <= 32)
        {
                cout << "Water will freeze\n"
                << "Oxygen will boil\n";
        }
    }
    if (Temp >= 33)
    {
        if(Temp <= 171)
        {
            cout << "Oxygen will boil\n";
        }
    }
    if (Temp >= 172)
    {
        if (Temp <= 211)
        {
            cout << "Oxygen will boil\n"
                    << "Ethyl Alcohol will boil\n";
        }
    }
    if (Temp >= 212)
    {
        if(Temp <= 675)
        {
            cout << "Oxygen will boil\n"
                    << "Ethyl Alcohol will boil\n"
                    << "Water will boil\n";
        }
    }
    if (Temp > 676)
    {
        cout << "Oxygen will boil\n"
                << "Ethyl Alcohol will boil\n"
                << "Water will boil\n"
                << "Mercury will boil\n";
    }
    

    return 0;
}

