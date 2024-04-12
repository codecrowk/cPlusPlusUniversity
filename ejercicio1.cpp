#include <iostream>
#include <vector> 

using namespace std;

// vector for store information
vector< vector<string>> info = {
  {"Jose", "Mario"},
  {"22", "40"},
  {"male", "female"},
  {"single", "married"},
  {"programmer", "Doctor"}
};

/*
NOTES:

- You have to parse the information
- use functions and read a global varible 
*/

int main() {
  // Global varibles
  int numberOfRegisters;

  // Print vector information
  for (int col = 0; col < info.size(); col++)
  {
    for (int item = 0; item < info[0].size(); item++)
    {
      cout << info[0][item] << " ";
      cout << info[1][item] << " ";
      cout << info[2][item] << " \n";
    }
  }

  // Spaggeti code, disgustin
  cout << "Enter how many people you want to register: ";
  cin >> numberOfRegisters;


  system("cls"); 


  for (int i = 0; i < numberOfRegisters; i++) 
  {
    cout << "Enter your name: ";
    cin >> info[0][i];

    cout << "Enter your age: ";
    cin >> info[1][i];

    cout << "Enter your gender: ";
    cin >> info[2][i];

    cout << "Enter your civil status: \n"  
    << "1. single\n"
    << "2. married\n"
    << "3. widow\n"
    << "4. no married: ";
    cin >> info[3][i];

    cout << "Enter your carrer: \n"
    << "1. System engineer\n"
    << "2. Programmer\n"
    << "3. Support\n"
    << "4. Ux and Ui designer: ";
    cin >> info[4][i];
  }
  return 0;
}

/*
REFERENCES

https://www.w3schools.com/cpp/cpp_arrays_multi.asp
https://www.geeksforgeeks.org/vector-in-cpp-stl/
https://www.geeksforgeeks.org/2d-vector-in-cpp-with-user-defined-size/

https://www.geeksforgeeks.org/how-to-clear-console-in-cpp/
*/