/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: sahum
 *
 * Created on January 16, 2020, 9:16 PM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

/* swet to kill mouse is 5g 
 * mouse is 35g
 * 
 * 
 * 0.1% of swet in a can 
 * can is 350g
 * swet in can is 0.35g
 * 
 * 45359.2g = 100 pounds 
 * mouse to man is proportional 
 * 
 * 14.28571
 * 1295.9714
 */
int main(int argc, char** argv) {
    cout << "Program to calculate the limit of Soda pop Consumption.\n"
            << "Input the desired dieters weight in lbs.\n";
    int weight;
    int convr;
    
    cin >> weight;
    
    convr = ((weight * 453.592) / 7) / 0.35;
    
    cout << "The maximum number of soda pop cans\nwhich can be consumed is "
            << convr << " cans";

    return 0;
}

