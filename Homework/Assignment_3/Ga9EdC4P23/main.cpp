/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: sahum
 *
 * Created on January 21, 2020, 10:02 PM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int choice;
    double area1, area2, area3, length, width, base, radius;
    double height;
    
    do {
        cout << "Geometry Calculator\n";
        cout << "1. Calculate the Area of a Circle\n"
                << "2. Calculate the Area of a Rectangle\n"
                << "3. Calculate the Area of a Triangle\n"
                << "4. Quit\n";
        cin >> choice;
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);

        
        switch (choice){
            case 1:
                cout << "Enter the radius of the circle:\n";
                cin >> radius;  
                
                if (radius > 0){    
                    area1 = 3.14159 * (radius * radius);
                    cout.precision(1);
                    cout << "The area of the circle is " << area1;
                }
                else{
                    cout << "Invalid entry, Reenter:\n";
                    cin >> radius;
                    
                    area1 = 3.14159 * (radius * radius);   
                    cout.precision(1);
                    cout << "The area of the circle is " << area1;                
                }
                return 0;

            case 2:
                cout << "Enter the length of the rectangle:\n";
                cout << "Enter the height of the rectangle:\n";
                cin >> length;
                cin >> height;
                    
                if (length > 0 && height > 0){                
                    area2 = length * height;
                    cout << "The area of the rectangle is " << area2;
                }
                else if (height > 0){
                    cout << "Invalid entry, Reenter:\n";
                    cin >> length;
                    
                    area2 = length * height;
                    cout << "The area of the rectangle is " << area2; 
                }
                else if (length > 0){
                    cout << "Invalid entry, Reenter:\n";
                    cin >> height;
                    
                    area2 = length * height;
                    cout << "The area of the rectangle is " << area2;
                }
                else{
                    cout << "Invalid entry, Reenter:\n";
                    cin >> length;
                    cin >> height;
                    
                    area2 = length * height;
                    cout << "The area of the rectangle is " << area2;
                }
                return 0;
                
            case 3:
                cout << "Enter the base of the triangle:\n";
                cout << "Enter the height of the triangle:\n";
                cin >> base;
                cin >> width;
                
                if (base > 0 && width > 0){                
                    area3 = base * width * 0.5;
                    cout.precision(1);
                    cout << "The area of the triangle is " << area3;
                }
                else if (base > 0){
                    cout << "Invalid entry, Reenter:\n";
                    cin >> width;
                    
                    area3 = base * width * 0.5;
                    cout.precision(1);
                    cout << "The area of the triangle is " << area3; 
                }
                else if (width > 0){
                    cout << "Invalid entry, Reenter:\n";
                    cin >> base;
                    
                    area3 = base * width * 0.5;
                    cout.precision(1);
                    cout << "The area of the triangle is " << area3;
                }
                else{
                    cout << "Invalid entry, Reenter:\n";
                    cin >> base;
                    cin >> width;
                    
                    area3 = base * width * 0.5;
                    cout.precision(1);
                    cout << "The area of the triangle is " << area3;
                }
                return 0;
                
            case 4:
                return 0;
                
            default:
                cout << "Invalid entry, Reenter:\n";
        }
    }while (choice != 4);

    return 0;
}

