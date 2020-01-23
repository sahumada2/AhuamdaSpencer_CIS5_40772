/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: sahum
 *
 * Created on January 19, 2020, 3:39 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    double newton, mass;
    
    cout << "Enter the mass of an object:\n";
    cin >> mass;
    
    newton = mass * 9.8;
    
    if (newton < 10)
    {
        cout << "The object is too light";

    }
    else if (newton > 1000)
    {
        cout << "The object is too heavy";
    }
    else 
    {
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(1);
            
        cout << "The object weighs " << newton << " newtons";
    }

    return 0;
}

