/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: sahum
 *
 * Created on January 15, 2020, 10:41 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    double grade1, grade2, grade3, grade4, grade5;
    double avgGrade;
    
    cout << "Input 5 numbers to average.\n";
    
    cin >> grade1 >> grade2 >> grade3 >> grade4 >> grade5;
    
    avgGrade = (grade1 + grade2 + grade3 + grade4 + grade5)/5;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    
    cout << "The average = " << avgGrade;

    return 0;
}

