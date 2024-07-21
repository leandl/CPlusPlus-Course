#include <iostream>
#include <iomanip>
#include <limits> 

void showBalance(double balance) {
  std::cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << std::endl;
}

double deposit() {
  double amount = 0;

  std::cout << "Enter amount to be deposited: ";
  std::cin >> amount;

  if (std::cin.fail()) {
    std::cin.clear(); // Limpa o estado de erro
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignora a entrada inválida
    std::cout << "That's not a valid amount!" << std::endl;
    return 0;
  }

  if (amount > 0) {
    return amount;
  }

  std::cout << "That's not a valid amount!" << std::endl;
  return 0;
}

double withdraw(double balance) {
  double amount = 0;

  std::cout << "Enter amount to be withdraw: ";
  std::cin >> amount;

  if (std::cin.fail()) {
    std::cin.clear(); // Limpa o estado de erro
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignora a entrada inválida
    std::cout << "That's not a valid amount!" << std::endl;
    return 0;
  }

  if (amount <= 0) {
    std::cout << "That's not a valid amount!" << std::endl;
    return 0;
  }

  if (amount > balance) {
    std::cout << "Insufficient funds!" << std::endl;
    return 0;
  }

  return amount;
}

int main() {
  double balance = 0;
  int choice = 0;
  
  do {
    std::cout << "********************" << std::endl;
    std::cout << "Bank Options " << std::endl;
    std::cout << "********************" << std::endl;
    std::cout << "1. Show Balance" << std::endl;
    std::cout << "2. Deposit Money" << std::endl;
    std::cout << "3. Withdraw Money" << std::endl;
    std::cout << "4. Exit" << std::endl;
    std::cout << "********************" << std::endl;
    std::cout << "Enter your choice: ";

    std::cin >> choice;
    if (std::cin.fail()) {
      std::cin.clear(); // Limpa o estado de erro
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignora a entrada inválida
      choice = 0; // Define escolha como inválida
    }


    std::cout << "********************" << std::endl;


    
    switch (choice) {
      case 1:
        showBalance(balance);
        break;

      case 2:
        balance += deposit();
        showBalance(balance);
        break;

      case 3:
        balance -= withdraw(balance);
        showBalance(balance);
        break;

      case 4:
        std::cout << "Thanks for visiting!" << std::endl;
        break;

      default:
        std::cout << "Invalid choice" << std::endl;
    }
    

  } while (choice != 4);

  return 0;  
}