/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: sahum
 *
 * Created on January 19, 2020, 4:10 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int points;
    
    cout << "Enter how many books you purchased this month:\n";
    cin >> points;
    
    switch (points)
    {
        case 0:
            cout << "You earned 0 points.";
            break;
        case 1:
            cout << "You earned 5 points.";
            break;
        case 2:
            cout << "You earned 15 points.";
            break;
        case 3:
            cout << "You earned 30 points.";
            break;
        case 4:
            cout << "You earned 60 points.";
            break;
        default:
            cout << "You earned 60 points.";
    }

    return 0;
}

