/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: sahum
 *
 * Created on January 15, 2020, 11:12 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    double serv, cookieAte, Cal, total, full;
    serv = 10;
    Cal = 300;
    total = Cal*serv;
    
    cout << "Calorie Counter\n" << "How many cookies did you eat?\n";
    
    cin >> cookieAte;
    total/= 40;
    full = total * cookieAte;
    
    cout << "You consumed " << full << " calories.";

    return 0;
}

