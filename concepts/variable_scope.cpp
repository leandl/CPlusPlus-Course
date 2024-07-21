#include <iostream>


int myNum = 3;
int myNum2 = 3;

void printNum() {
  int myNum = 2;
  std::cout << "myNum: " << myNum << std::endl;
  std::cout << "myNum2: " << myNum2 << std::endl;
}

int main() {
  int myNum = 1;

  printNum();
  std::cout << "myNum: " << myNum << std::endl;
  std::cout << "myNum2: " << myNum2 << std::endl;
  std::cout << "myNum: " << ::myNum << std::endl;
  std::cout << "myNum2: " << ::myNum2 << std::endl;
  return 0;
}
