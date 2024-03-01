 // C++ Program to convert
// string into integer
// Using stoi function
// Error occurred
#include <iostream>
   
// C++ Program to convert String
// into number using for loop
#include <bits/stdc++.h>
 
using namespace std;
int localStoi(string numberStr)
{
    int numberLength = numberStr.length();
    int numberConvert = 0;
    int isPositive = 1;
    char currentNumber;
    // Traversing string
    for (int i = 0; i < numberLength; i++) {
    	currentNumber = numberStr[i];
        // Checking if the element is number
        if (currentNumber >= '0' && currentNumber <= '9') {
            numberConvert = numberConvert * 10 + (currentNumber - '0');
        }
        
        else if (currentNumber == '-') {
          // Changing positive status (to negative)
          isPositive = -1;
        }
        // Otherwise print bad output
        else {
            cout << "Bad Input";
            return 1;
        }
    }
    return numberConvert;
}
