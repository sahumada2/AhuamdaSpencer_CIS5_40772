/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: sahum
 *
 * Created on January 7, 2020, 9:50 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    float fedBudget, milBudget, Percent;

    fedBudget = 4.1;
    milBudget = 700;
    
    cout << "According to sources the Federal Budget is $" << fedBudget
            << " Trillion." << endl;
    Percent = (fedBudget * 1000) / milBudget;
    
    cout << "whereas the Military Budget is " << Percent << "% of that. " << 
            endl << "which is about $" << milBudget << " Billion";
    

    return 0;
}

