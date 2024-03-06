// Organizar numeros de mayor a menor 
#include <iostream>
#include <typeinfo>

using namespace std;

int getValuePointer (int variableToPoint[]){
//  variableToPoint = 10;
//  int *pointer = &variableToPoint;
  cout << variableToPoint;
//  return *pointer;
	return 0;
}
int getArraySize (int userArray[]){
  cout << "This reference = " << typeid(userArray).name() << "\n";
  int arrayElements = getValuePointer(userArray);
  arrayElements = 2;
  cout << arrayElements;
  int arrayLength = sizeof(userArray) / sizeof(int);
  cout << sizeof(int) << "this length";
  return 0;
}


int main() {
  int arrayLength = 3;
  int numbers[arrayLength] = {7, 10};
  for (int i = 0; i < arrayLength; i++){
  	cout << "Enter number " << i;
  }
  
  return 0;
}
