#include <iostream>

int main() {
  int numberQuestions = 4;
  int numberOptionsForQuestion = 4;

	std::string questions[numberQuestions] = {
    "1. What year was C++ created?: ",
    "2. Who invented C++?: ",
    "3. What is the predecessor of C++?: ",
    "4. Is the Earth flat?"
  };

	std::string options[numberQuestions][numberOptionsForQuestion] = {
    {"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
    {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerburg"},
    {"A. C", "B. C+", "C. C--", "D. B++"},
    {"A. yes", "B. no", "C. sometimes", "D. what's Earth?"}
  };

	char answerKey[numberQuestions] = {'C', 'B', 'A', 'B'};

	char guess;
	int score = 0;

	for(int i = 0; i < numberQuestions; i++){
		std::cout << "*******************************" << std::endl;
		std::cout << questions[i] << std::endl;
		std::cout << "*******************************" << std::endl;

		for(int j = 0; j < numberOptionsForQuestion; j++){
			std::cout << options[i][j] << std::endl;
		}

    std::cout << "*******************************" << std::endl;
    std::cout << "R: ";
		std::cin >> guess;
		guess = toupper(guess);

		if(guess == answerKey[i]){
			std::cout << "CORRECT" << std::endl;
			score++;
		} else{
			std::cout << "WRONG!" << std::endl;
			std::cout << "Answer: " << answerKey[i] << '\n';
		}
	}

  double percentageOfHits = (score/(double) numberQuestions) * 100;

	std::cout << "*******************************" << std::endl;
	std::cout << "*           RESULTS           *" << std::endl;
	std::cout << "*******************************" << std::endl;
	std::cout << "CORRECT GUESSES: " << score << std::endl;
	std::cout << "# of QUESTIONS: " << numberQuestions << std::endl;
	std::cout << "SCORE: " <<  percentageOfHits  << "%" << std::endl;

  return 0;
}