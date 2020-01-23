/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: sahum
 *
 * Created on January 19, 2020, 7:11 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int numbers;
    
        cout << "Enter a number between 1 and 10:\n";
    do
    {
        cin >> numbers;
        switch(numbers)
        {
            case 1:
                cout << numbers << " is I in Roman numerals";
                return 0;
                break;
            case 2:
                cout << numbers << " is II in Roman numerals";
                break ;
            case 3:
                cout << numbers << " is III in Roman numerals";
                break;
            case 4:
                cout << numbers << " is IV in Roman numerals";
                break;
            case 5:
                cout << numbers << " is V in Roman numerals";
                break;
            case 6:
                cout << numbers << " is VI in Roman numerals";
                break;
            case 7:
                cout << numbers << " is VII in Roman numerals";
                break;
            case 8:
                cout << numbers << " is VIII in Roman numerals";
                break;
            case 9:
                cout << numbers << " is IX in Roman numerals";
                break;
            case 10:
                cout << numbers << " is X in Roman numerals";
                break;
            default:
                cout << "Entered number is not valid, reenter number:\n";                
        }
    }while (numbers != 10);

    return 0;
}

