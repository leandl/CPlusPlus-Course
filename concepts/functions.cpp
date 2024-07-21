#include <iostream>


using t_str = std::string;

void happyBirthday(t_str name, int age) {
  std::cout << "Happy Birthday to " << name << "!" << std::endl;
  std::cout << "Happy Birthday to " << name << "!" << std::endl;
  std::cout << "Happy Birthday dear " << name << "!" << std::endl;
  std::cout << "Happy Birthday to " << name << "!" << std::endl;
  std::cout << "You are " << age << " years old!" << std::endl;
}

void happyBirthday2(t_str name, int age);

int main() {
  t_str name = "Leandro";
  int age = 21;

  std::cout << "############## Happy Birthday ############## " << std::endl;
  happyBirthday(name, age);

  std::cout << std::endl << "############## Happy Birthday2 ############# " << std::endl;
  happyBirthday2(name, age);

  return 0;
}


void happyBirthday2(t_str name, int age) {
  std::cout << "Happy Birthday to " << name << "!" << std::endl;
  std::cout << "Happy Birthday to " << name << "!" << std::endl;
  std::cout << "Happy Birthday dear " << name << "!" << std::endl;
  std::cout << "Happy Birthday to " << name << "!" << std::endl;
  std::cout << "You are " << age << " years old!" << std::endl;
}