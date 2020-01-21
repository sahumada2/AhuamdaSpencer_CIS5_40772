/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: sahum
 *
 * Created on January 17, 2020, 7:27 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int num, sumP, sumN, sum;
    int pos1 = 0;
    int pos2 = 0;
    int neg1 = 0;
    int neg2 = 0;
    sum = 8;
    cout << "Input 10 numbers, any order, positive or negative\n";
    
    cin >> num; //1
    if (num <= 0)
    {
        neg1 = num;
    }
    else
    {
        pos1 = num;
    }

    cin >> num;  //2
    if (num <= 0)
    {
        neg2 = num;
    }
    else
    {
       pos2 = num; 
    }
    sumP = pos1 + pos2;
    sumN = neg1 + neg2;
    
    while (sum > 0)
    {
    cin >> num;  //3
    if (num <= 0)
    {
        neg1 = num;
    }
    else
    {
        pos1 = num;
    }
    pos2 = sumP;
    neg2 = sumN;
    sumP = pos1 + pos2;
    sumN = neg1 + neg2;
    
    pos1 = 0;
    neg1 = 0;
    
    sum--;
    }
 
    cout << "Negative sum =" << setw(4) << sumN << endl;
    cout << "Positive sum =" << setw(4) << sumP << endl;
    cout << "Total sum    =" << setw(4) << sumN + sumP;
    
    return 0;
}

