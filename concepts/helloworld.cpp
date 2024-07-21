#include <iostream>
#include <cmath>

int main() {

  double a;
  double b;
  double c;

  std::cout << "Enter side A: ";
  std::cin >> a;

  std::cout << "Enter side B: ";
  std::cin >> b;

  c = sqrt(pow(a, 2) + pow(b, 2));
  
  std::cout << "side C: " << c << std::endl;
  // std::string name;
  // int age = age;

  // std::cout << "What's your age?" << std::endl;
  // std::cin >> age;


  // std::cout << "What's your name?" << std::endl;
  // std::getline(std::cin >> std::ws, name);

  
  // std::cout << "Hello " << name << std::endl;
  // std::cout << "You are " << age << " years old" << std::endl;

  return 0;
}