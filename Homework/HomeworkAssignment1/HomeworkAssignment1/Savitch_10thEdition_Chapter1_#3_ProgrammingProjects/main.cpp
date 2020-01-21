/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: sahum
 *
 * Created on January 9, 2020, 10:28 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int qt,dm,nkl,total, pnn;
    
    cout<<"How much change do you have in your pocket?\n";
    cout<<"press enter when value is entered.\n\n";
    cout<<"how many Quarters do you have: ";
    cin >> qt;
    cout<<"How many Dimes do you have: ";
    cin >> dm;
    cout<<"How many Nickels do you have: ";
    cin >> nkl;
    cout<<"How many Pennies do you have: ";
    cin >> pnn;
    
    total = (25*qt)+(10*dm)+(5*nkl)+pnn;
    cout <<"\n\nYou have "<<total<<" cents in you pocket";
    cout <<"\nCongrats that's more change than me";
    

    return 0;
}

