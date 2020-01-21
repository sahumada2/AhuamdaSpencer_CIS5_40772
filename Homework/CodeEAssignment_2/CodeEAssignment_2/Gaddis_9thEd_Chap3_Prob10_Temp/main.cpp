/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: sahum
 *
 * Created on January 16, 2020, 4:08 PM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    cout << "Temperature Converter\n" << "Input Degrees Fahrenheit\n";
    double USA;
    double elseWhere;
    
    cin >> USA;
    
    elseWhere = (5 *(USA-32))/9;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    
    cout << USA << " Degrees Fahrenheit = " << elseWhere 
            << " Degrees Centigrade";

    return 0;
}

