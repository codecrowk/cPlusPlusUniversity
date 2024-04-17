#include <iostream>
#include <string>
#include <vector> 
#include <format>

using namespace std;

class Users 
{
  public:
    string Name;
    string Age;
    string Gender;
    string CivilStatus;
    string Carrer;
};

class UsersController
{
  private:
    vector <Users> dataBase;
    string vectorInfoPrint = "Name | Age | Gender | Carrer \n";
  public:
    void addNewUser (Users user)
    {
      dataBase.push_back(user);
    }

    void printUsers ()
    {
      // Print vector information
      cout << vectorInfoPrint; 
      for (int i = 0; i < dataBase.size(); i++)
      {
        Users user = dataBase[i];
        cout << user.Name << " " << user.Age << " " << user.Gender << " " << user.Carrer << "\n";
      }
    }

    void youngerSystemWoman ()
    {
      int youngerAge = 200;
      cout << vectorInfoPrint; 

      Users youngerWoman;

      for (int i = 0; i < dataBase.size(); i++)
      {
        Users user = dataBase[i];
        // Validate information about user
        if (user.Gender == "Female"
          && user.Carrer == "System engineer"
          && stoi(user.Age) < youngerAge)
        {
          youngerWoman = user;
        }
      }

      try
      {
        cout << youngerWoman.Name << " " << youngerWoman.Age << " " << youngerWoman.Gender << " " << youngerWoman.Carrer << "\n";
        // if (youngerWoman.Gender == "") throw new exception;
      }
      catch(const exception& e)
      {
        cout << "Not founded user";
      }
    }

    void olderSystemMan ()
    {
      int youngerAge = 0;
      cout << vectorInfoPrint; 

      Users olderMan;

      for (int i = 0; i < dataBase.size(); i++)
      {
        Users user = dataBase[i];
        // Validate information about user
        if (user.Gender == "Male"
          && user.Carrer == "System engineer"
          && stoi(user.Age) > youngerAge)
        {
          olderMan = user;
        }
      }

      try
      {
        cout << olderMan.Name << " " << olderMan.Age << " " << olderMan.Gender << " " << olderMan.Carrer << "\n";
        // if (youngerWoman.Gender == "") throw new exception;
      }
      catch(const exception& e)
      {
        cout << "Not founded user";
      }
      
    }
};

class DataConvertor
{
  private:
    string Gender[2] = {"Male", "Female"};
    string CivilStatus[4] = {"Single", "Married", "Widow", "No married"};
    string Carrers[4] = {"System engineer", "Programmer", "Support", "Ux and Ui designer"};
  
  public:
    string GetGender(int position)
    {
      return Gender[position];
    }


    string GetCarrer(int position)
    {
      return Carrers[position];
    }

    string GetCivilStatus(int position)
    {
      return CivilStatus[position];
    }
};

/*
NOTES:

- You have to parse the information
- use functions and read a global varible 
*/

int main() {
  int numberOfRegisters;
  string carrer,
    gender,
    civilStatus;

  UsersController userControll;
  DataConvertor dataConvetor;
  Users user;

  // Spaggeti code, disgustin
  cout << "Enter how many people you want to register: ";
  cin >> numberOfRegisters;

  system("cls"); 

  for (int i = 0; i < numberOfRegisters; i++) 
  {
    cout << "Enter your name: ";
    cin >> user.Name;

    cout << "Enter your age: ";
    cin >> user.Age;

    cout << "Enter your gender: ";
    cout << "Enter your gender: \n"  
    << "1. man\n"
    << "2. women: ";
    cin >> gender;
    // remember that array start at 0 position
    user.Gender = dataConvetor.GetGender(stoi(gender) -1); 

    cout << "Enter your civil status: \n"  
    << "1. single\n"
    << "2. married\n"
    << "3. widow\n"
    << "4. no married: ";
    cin >> civilStatus;
    user.CivilStatus = dataConvetor.GetCivilStatus(stoi(civilStatus) -1);

    cout << "Enter your carrer: \n"
    << "1. System engineer\n"
    << "2. Programmer\n"
    << "3. Support\n"
    << "4. Ux and Ui designer: ";
    cin >> carrer;
    user.Carrer = dataConvetor.GetCarrer(stoi(carrer) -1);
    userControll.addNewUser(user);
  }

  // userControll.printUsers();
  userControll.youngerSystemWoman();
  return 0;
}

/*
REFERENCES

https://www.w3schools.com/cpp/cpp_arrays_multi.asp
https://www.geeksforgeeks.org/vector-in-cpp-stl/
https://www.geeksforgeeks.org/2d-vector-in-cpp-with-user-defined-size/

https://www.geeksforgeeks.org/how-to-clear-console-in-cpp/

https://www.studyplan.dev/intro-to-programming/string-interpolation
*/