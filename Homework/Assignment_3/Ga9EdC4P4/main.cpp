/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: sahum
 *
 * Created on January 19, 2020, 3:29 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int width1,height1,width2,height2;
    int area1, area2;
    
    cout << "Enter the width of rectangle 1:\n";
    cin >> width1;
    
    cout << "Enter the height of rectangle 1:\n";
    cin >> height1;
    
    cout << "Enter the width of rectangle 2:\n";
    cin >> width2;
    
    cout << "Enter the height of rectangle 2:\n";
    cin >> height2;
    
    area1 = width1 * height1;
    area2 = width2 * height2;
    
    if (area1 > area2)
    {
        cout << "Rectangle 1 has the greater area";
    }
    else if (area1 < area2)
    {
        cout << "Rectangle 2 has the greater area";
    }
    else
    {
        cout << "The rectangles have the same area";
    }

    return 0;
}

