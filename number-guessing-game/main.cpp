#include <iostream>
#include <ctime>

int main() {
  srand(time(0));

  int number = (rand() % 100) + 1;
  int tries = 0;
  int guess;

  std::cout << "********* NUMBER GUESSING GAME *********" << std::endl;
  do {
    std::cout << "Enter a guess between (1-100): ";
    std::cin >> guess;
    tries += 1;

    if (guess > number) {
      std::cout << "Too high!" << std::endl; 
    } else if (guess < number) {
      std::cout << "Too low!" << std::endl; 
    } else {
      std::cout << "CORRECT! # of tries: " << tries << std::endl; 
    }

  } while(number != guess);

  return 0;
}