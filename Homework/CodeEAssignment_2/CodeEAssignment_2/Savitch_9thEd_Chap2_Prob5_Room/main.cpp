/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: sahum
 *
 * Created on January 17, 2020, 7:09 PM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int lotsPeople, littlePeople, tooMany;
/*
 * 
 */
int main(int argc, char** argv) {
    cout << "Input the maximum room capacity and the number of people\n";
    cin >> lotsPeople;
    cin >> littlePeople;
    
    tooMany = littlePeople - lotsPeople;
    
    if (littlePeople > lotsPeople)
    {
        cout << "Meeting cannot be held.\nReduce number of people by " 
                << tooMany << " to avoid fire violation.";
    }
    else 
    {
        int fill;
        fill = lotsPeople - littlePeople;
        cout << "Meeting can be held.\n"
                "Increase number of people by " <<  fill
                << " will be allowed without "
                "violation.";
    }

    return 0;
}

