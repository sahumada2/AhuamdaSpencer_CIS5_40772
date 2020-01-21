/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: sahum
 *
 * Created on January 16, 2020, 11:07 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
    float money;
    float retro, newA;
    float monthly;
/*
 * 
 */
int main(int argc, char** argv) {
    
    cout << "Input previous annual salary.\n";

    
    cin >> money;
    
    retro = (money * 0.076) / 2;
    newA = money + (retro * 2);
    monthly = newA / 12;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    cout << "Retroactive pay    = $" << setw(7)<< retro << '\n';
    cout << "New annual salary  = $" << newA << '\n';
    cout << "New monthly salary = $" << setw(7)<< monthly;


    return 0;
}