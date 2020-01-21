/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: sahum
 *
 * Created on January 6, 2020, 6:13 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    int num1,num2,sumNum,proNum;
    cout << "Enter a number\n";
    cin >> num1;
    cout << "Enter another number\n";
    cin >> num2;
    sumNum = num1 + num2;
    proNum = num1 * num2;
    cout << "\nThe sum of the two numbers are " << sumNum << endl;
    cout << "The product of the two numbers are " << proNum << endl;
    cout << "\nThat's all folks \n";

    return 0;
}

