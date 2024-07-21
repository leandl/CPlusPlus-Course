#include <iostream>
#include <ctime>


char getUserChoice(){
	std::cout << "Rock-Paper-Scissors Game!" << std::endl;
	char player;
  bool choiceValid;

	do{
		std::cout << "Choose one of the following" << std::endl;
		std::cout << "*************************" << std::endl;
		std::cout << "'r' for rock" << std::endl;
		std::cout << "'p' for paper" << std::endl;
		std::cout << "'s' for scissors" << std::endl;
		std::cin >> player;

    choiceValid = player != 'r' && player != 'p' && player != 's';
	}while(choiceValid);

	return player;
}

char getComputerChoice(){
	srand(time(0));
	int num = rand() % 3 + 1;

	switch(num){
		case 1: return 'r';
		case 2: return 'p';
		case 3: return 's';
	}

	return 0;
}

std::string getNameChoice(char choice){
  switch(choice){
		case 'r': return "Rock";
		case 'p': return "Paper";
		case 's': return "Scissors";
	}

	return 0;
}

void chooseWinner(char player, char computer){
  if (player == computer) {
    std::cout << "It's a tie!" << std::endl;
    return;
  }

  if (
    (player == 'r' && computer == 's') ||
    (player == 's' && computer == 'p') ||
    (player == 'p' && computer == 'r')
  ) {
    std::cout << "You win!" << std::endl;
    return;
  } 
    
  std::cout << "You lose!" << std::endl;
}


int main() {
	char player;
	char computer;

	player = getUserChoice();
	std::cout << "Your choice: " << getNameChoice(player) << std::endl;

	computer = getComputerChoice();
	std::cout << "Computer's choice: " << getNameChoice(computer) << std::endl;

	chooseWinner(player, computer);
  return 0;
}
