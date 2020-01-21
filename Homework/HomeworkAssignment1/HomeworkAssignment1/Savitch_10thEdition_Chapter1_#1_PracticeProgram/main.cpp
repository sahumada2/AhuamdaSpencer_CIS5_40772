/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: sahum
 *
 * Created on January 8, 2020, 10:55 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    int numberOfPods, peasPerPod, totalPeas;
    cout << "Press return after entering a number.\n";
    cout << "enter the number of pods: \n";
    cin >>numberOfPods;
    cout << "Enter the number of peas in a pod: \n";
    cin >> peasPerPod;
    totalPeas = numberOfPods * peasPerPod;
    cout << "If you have ";
    cout << numberOfPods;
    cout << " pea pods \n";
    cout << "and ";
    cout << peasPerPod;
    cout << " peas in each pod, then \n";
    cout << "you have ";
    cout << totalPeas;
    cout << " peas in all the pods. \n";

    return 0;
}

/* Using your text editor, enter (that is, type in) the C++ program shown in 
 * display 1.8. Be certain to type the first line exactly as shown in Display
 * 1.8. In particular, be sure that the first line begins at the left-hand end
 * of the run line with no spaces before or after the # symbol. Compile and run
 * the program. If the compiler gives you an error message correct the program 
 * and recompile the program. Do this until the compiler gives no error messages.
 * Then run your program.
 */
// int argc, char** argv
