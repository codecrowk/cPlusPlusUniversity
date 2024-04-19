#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Movies
{
private:
  float discount;
public:
  string buyCode;
  int quantity;
  float price;
  float getDiscount()
  {
    if (quantity <= 5)
    {
      discount = 10;
    } 
    else if (quantity <= 10)
    {
      discount = 15;
    }
    else
    {
      discount = 20;
    }

    return discount;
  };
};

class Discounter
{
  public:
    static float calculatePriceNotDiscount (int quantity, float price)
    {
      return quantity * price;
    }

    static float calculateDiscount (int quantity, float price, float discount)
    {
      float finalAmount = calculatePriceNotDiscount(quantity, price);
      float totalDiscount = (finalAmount * discount) / 100;
      return finalAmount - totalDiscount;
    }

};


int main() {
  Movies movie;
  Movies currentMovie;
  vector<Movies> movieList;
  // movie.buyCode = "1021";
  // movie.price = 20000;
  // movie.quantity = 3;

  // movieList.push_back(movie);

  //----- GET DATA -----//
  int moviesCount;
  cout << "How many movies do you want to purchase?: ";
  cin >> moviesCount;

  for (int i = 0; i < moviesCount; i++)
  {
    cout << "Enter product code: ";
    cin >> movie.buyCode;

    cout << "Enter product quantity: ";
    cin >> movie.quantity;

    cout << "Enter product price: ";
    cin >> movie.price;

    movieList.push_back(movie);
  }
  
  //----- RUN RESULTS -----//
  cout << "Product code | Price | Quantity | Final amount | Discount type | Discount \n";
  for (int i = 0; i < movieList.size(); i++)
  {
    currentMovie = movieList[i];
    cout << currentMovie.buyCode << "       | "
      << currentMovie.price << " |    "
      << currentMovie.quantity << "     |     "
      << Discounter::calculatePriceNotDiscount(currentMovie.quantity, currentMovie.price) << "    |      "
      << currentMovie.getDiscount() << "       |     "
      << Discounter::calculateDiscount(currentMovie.quantity, currentMovie.price, currentMovie.getDiscount())
      << endl;
  }
  

  return 0;
}