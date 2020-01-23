/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: sahum
 *
 * Created on January 19, 2020, 8:33 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int month, day, year;
    
    cout << "Enter a month:\n";
    cin >> month;
    
    cout << "Enter a day:\n";
    cin >> day;
    
    cout << "Enter a year:\n";
    cin >> year;
    
    
    if (month * day == year)
    {
        cout << "The date is magic";
    }
    else
    {
        cout << "The date is not magic";
    }

    return 0;
}

