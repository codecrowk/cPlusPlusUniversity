#include <iostream>
#include <string>
#include <cstdlib>  
#include <vector>
// #define SmartConsole
using namespace std;
using std::vector;

// It will convert everythin to string
class SmartConsole {
  public:
    struct identifier {
      string identifier;
      string value;
    };
    vector<identifier> identifierList;

    void stringConsole(string userMessage, string userID);
    string getIdentifier(string userIdentifier);
};

void SmartConsole::stringConsole(string userMessage, string userID){
  identifier newID;
  string inputValue;
  cout << userMessage;
  getline(cin, inputValue);
  newID.value = inputValue;
  newID.identifier = userID;
  identifierList.push_back(newID); 
};

string SmartConsole::getIdentifier(string userIdentifier){
  int dataSize = identifierList.size();
  for (int i = 0; i < dataSize; i++)
  {
    string elementID = identifierList[i].identifier;
    if (elementID == userIdentifier)
    {
      string elementValue = identifierList[i].value;
      return elementValue;
    }
  }
  return "ID doesn't exist";
}

// int main() {
//   SmartConsole printer;
//   printer.stringConsole("como nacen los ninnos ", "nacer");
//   cout << printer.getIdentifier("nacer");
//   return 0;
// }