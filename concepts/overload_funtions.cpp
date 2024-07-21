#include <iostream>

void bakePizza() {
  std::cout << "Here is your pizza!" << std::endl;
}

void bakePizza(std::string topping1) {
  std::cout << "Here is your " << topping1 << " pizza!" << std::endl;
}

void bakePizza(std::string topping1, std::string topping2) {
  std::cout << "Here is your " << topping1 << " and " << topping2 << " pizza!" << std::endl;
}

int main() {
  bakePizza();
  bakePizza("pepperoni");
  bakePizza("pepperoni", "mushrooms");
  return 0;
}


