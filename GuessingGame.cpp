#include <iostream>
#include <windows.h>
#include <typeinfo>
#include <chrono>
#include <thread>
#include <string>
#include <cstdlib>
#include <ctime>

using std::string;

/**
* Generates a random number and users have to guess the number.
*/
void playGame()
{
	int random = rand() % 251; //Generates a random number
	std::cout << "Guess a number: " << std::endl;

	while (true)
	{
		int guess;
		std::cin >> guess;

		if (guess == random)
		{
			std::cout << "You win!" << std::endl;
			Sleep(2000); //The program pauses for 2 seconds
			//std::this_thread::sleep_for(std::chrono::seconds(2));
			system("CLS"); //Clears the console window
			break;
		}
		else if (guess < random)
		{
			std::cout << "Too low" << std::endl;
		}
		else
		{
			std::cout << "Too high" << std::endl;
		}
	}
}


int main()
{
	srand(time(NULL));
	int choice;

	do
	{
		std::cout << "1. Play Game" << std::endl;
		std::cout << "2. Quit Game" << std::endl;
		std::cin >> choice;

		switch (choice)
		{
		case 1:
			std::cout << "Starting game..." << std::endl;
			Sleep(1000); //Program pauses for 1 seconds
			system("CLS"); //Clears console window
			playGame();
			break;
		case 2:
			std::cout << "Exiting game..." << std::endl;
			Sleep(1000); //Program pauses for 1 seconds
			system("CLS"); //Clear console window
			return 0;
		}
	} while (choice != 2);

	return 0;
}