/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: sahum
 *
 * Created on January 16, 2020, 3:57 PM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    cout << "Insurance Calculator\n" << "How much is your house worth?\n";
    
    double yourHouse, insure;
    
    cin >> yourHouse;
    
    insure = yourHouse * 0.8;
    
    // cout.setf(ios::fixed);
    // cout.setf(ios::showpoint);
    // cout.precision(2);
    
    cout << "You need " << insure <<" of insurance.";
    

    return 0;
}

