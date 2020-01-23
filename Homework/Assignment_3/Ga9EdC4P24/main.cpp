/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: sahum
 *
 * Created on January 22, 2020, 4:43 PM
 */

#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int hour, minutes;
    double rate;
    char ch;
    
    
    cout << "Enter the starting time:\n";
    cin >> hour >> ch >> minutes;
    cout << "Enter the number of minutes of the call:\n";
    cin >> rate;
    
    if(hour >= 0 && minutes >= 0){
        if(hour <= 23 && minutes <= 59){
            if(hour >= 0 && minutes >= 0){
                if (hour <= 6 && minutes <= 59){
                    rate *= 0.05;
            
                    cout << "The charges are $" << rate;
                }
            }
            if(hour >= 7 && minutes >= 0){
                if(hour <= 18 && minutes <= 59){
                    rate *= 0.45;
            
                    cout << "The charges are $" << rate;
            
                }
            }
            if(hour == 19 && minutes == 00){
                rate *= 0.45;
            
                cout << "The charges are $" << rate;   
            }
            if (hour > 19 && minutes >= 00){
                if(hour < 24 && minutes <= 59){
                    rate *= 0.20;
                    cout << "The charges are $" << rate;
                }
            }
        }
    }
    else{
        cout << "invalid entry\n";
    }
    return 0;
}

