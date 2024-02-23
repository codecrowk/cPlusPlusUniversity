#include <iostream>
#include <cstdlib>  
#include "views.h"
using namespace std;

int intMessage(string userMessage){
  int value;
  cout << userMessage;
  cin >> value;
  return value;
}

class worker{
  public:
  	int myNum;
  	string myString;
  	
  	// void addWorker(){
  		
  	// }
};

int main(){
  SmartConsole smart;
  smart.stringConsole("hola: ", "mundo");
  struct {
  	float hourCost,
  	  yearBonification;
  } business;
  
  struct {
  	float mountReduction;
  	int hoursNumber,
  	  yearsWorking = 3;
  } worker;
  
  cout << "hello world";
  // inputMessage("cuantos annos llevas trabajando? ", worker.yearsWorking);
  // cout << worker.yearsWorking;

  // inputMessage("cuantas horas trabajaste en el mes? ", worker.hoursNumber);
  // inputMessage("cuanto te reduccen en el mes? ", worker.mountReduction);
  // inputMessage("cuantos annos llevas trabajando? ", worker.yearsWorking);
  
  // inputMessage("cual es el valor de la hora?", worker.mountReduction);
  // inputMessage("cual es el valor de la bonificacion anual?", worker.mountReduction);


  

  
  // cout << business.hourCost;
  
//  cout << "cuanto vale la hora?";
//  cin >> business.hourCost;
  
  return 0;
}
