/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: sahum
 *
 * Created on January 16, 2020, 4:25 PM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    cout << "Calculate trig functions\n"
            << "Input the angle in degrees.\n";
    
    int degrees;
    double convr;
    
    cin >> degrees;
    
    convr = degrees * 3.1415926 / 180;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(4);
    
    cout << "sin(" << degrees << ") = " << sin(convr) << '\n';
    cout << "cos(" << degrees << ") = " << cos(convr) << '\n';
    cout << "tan(" << degrees << ") = " << tan(convr);
    return 0;
}

