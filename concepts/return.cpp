#include <iostream>

double square(double length) {
  return length * length;
}

double cube(double length) {
  return length * length * length;
}

std::string concatStrings(std::string string1, std::string string2) {
  return string1 + " " + string2;
}

int main() {
  double length = 5.0;

  double area = square(length);
  double volume = cube(length);

  std::cout << "Area: " << area << "cm^2" << std::endl;
  std::cout << "Volume: " << volume << "cm^3" << std::endl;

  std::cout << std::endl;

  std::string firstName = "Leandro";
  std::string lastName = "Crispim";
  std::string fullName = concatStrings(firstName, lastName);
  
  std::cout << "Hello " << fullName << std::endl;

  return 0;
}


