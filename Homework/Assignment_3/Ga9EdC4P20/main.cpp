/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: sahum
 *
 * Created on January 19, 2020, 4:47 PM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;
/*
 * 
 */
int main(int argc, char** argv) {
    int choice;
    double time, distance;
    
    cout << "choose which medium the sound wave will travel in.\n";
    cout << "1.Air\n";
    cout << "2.Water\n";
    cout << "3.Steel\n";
    cin >> choice;
    
    cout << "enter the distance the wave will travel:\n";
    cin >> distance;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    
    switch(choice)
    {
 
        case 1:
            time = distance / 1100;
            cout.precision(4);
            cout << "The wave will take " << time << " seconds";
            break;
        case 2:
            time = distance / 4900;
            cout.precision(4);
            cout << "The wave will take " << time << " seconds";
            break;
        case 3:
            time = distance / 16400;
            cout.precision(4);
            cout << "The wave will take " << time << " seconds";
    }
    
    return 0;
}

