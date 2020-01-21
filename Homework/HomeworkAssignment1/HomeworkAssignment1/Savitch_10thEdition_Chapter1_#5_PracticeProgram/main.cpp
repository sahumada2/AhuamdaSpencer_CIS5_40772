/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: sahum
 *
 * Created on January 10, 2020, 9:41 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int width, height, totalLength;
    
    cout << "Hello!\n";
    
    cout <<"Calculate the total length of fence needed to enclose a rectangular"
            " area.\n";
    cout <<"Enter the width in feet, then press enter.\n";
    cin >> width;
    
    cout <<"Enter the height in feet, then press enter.\n";
    cin >> height;
    
    totalLength = width * height;
    
    cout <<"the total length of the fence need to enclose a rectangular area is "
            << totalLength <<" ft. sq.\n";

    cout << "Good-bye! \n";
    return 0;
}

