#include <iostream>


int main() {
  char op;
  double num1;
  double num2;
  double result;

  std::cout << "***************** CALCULATOR *****************" << std::endl;

  std::cout << "Entre either (+ - * /): ";
  std::cin >> op;

  std::cout << "Entre #1: ";
  std::cin >> num1;

  std::cout << "Entre #2: ";
  std::cin >> num2;

  switch (op) {
    case '+':
      result = num1 + num2;
      std::cout << "result: " << result << std::endl;
      break;

    case '-':
      result = num1 - num2;
      std::cout << "result: " << result << std::endl;
      break;

    case '*':
      result = num1 * num2;
      std::cout << "result: " << result << std::endl;
      break;

    case '/':
      result = num1 / num2;
      std::cout << "result: " << result << std::endl;
      break;
  
    default:
      break;
  }

  std::cout << "**********************************************" << std::endl;

  return 0;
}