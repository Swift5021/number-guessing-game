#include <iostream>
using namespace std;

int main() {
  
  int num;
  int guess;
  int tries = 0;

  srand(time(NULL));
  num = (rand() % 100) + 1;

  std:: cout << "****** NUMBER GUESSING GAME ******\n";

  do{
      std::cout << "Enter a guess between (1-100): ";
      std:: cin >> guess;
      tries++;

      if(guess > num){
        std::cout << "Too high!\n";
      }
      else if(guess < num){
        std::cout << "Too low!\n";
      }
      else{
        std::cout <<"CORRECT! # of tries : " << tries << '\n';
      }

  }while(guess != num);

  std::cout << "**********************************";
  cin.ignore();
    cin.get();
  return 0;
}