/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: sahum
 *
 * Created on January 10, 2020, 9:11 AM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int time, distance;
    
    cout << "How far can an object fall in perfect conditions?\n";
    cout <<"Enter a time in seconds, when completed press the return key.\n";
    cin >> time;
    distance = (32 * (time * time))/2;
    
    cout << "This object will fall " << distance << " feet in " << time 
            << " seconds";

    return 0;
}

