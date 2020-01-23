/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: sahum
 *
 * Created on January 18, 2020, 6:37 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int larger,smaller;
    
    cout << "Enter a number:\n";
    cin >> larger;
    
    cout << "Enter a number:\n";
    cin >> smaller;
    
    if (larger < smaller)
    {
        cout << smaller << " is larger";
    }
    else
    {
        cout << larger << " is larger";
    }

    return 0;
}

