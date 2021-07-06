#include <iostream>
#include <windows.h>
#include <typeinfo>
#include <chrono>
#include <thread>
#include <string>
#include <cstdlib>
#include <ctime>

using std::string;

void playGame()
{
	int random = rand() % 251;
	std::cout << "Guess a number: " << std::endl;

	while (true)
	{
		int guess;
		std::cin >> guess;

		if (guess == random)
		{
			std::cout << "You win!" << std::endl;
			Sleep(2000);
			//std::this_thread::sleep_for(std::chrono::seconds(2));
			system("CLS");
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
			Sleep(1000);
			system("CLS"); //Clear console
			playGame();
			break;
		case 2:
			std::cout << "Exiting game..." << std::endl;
			Sleep(1000);
			system("CLS"); //Clear console
			return 0;
		}
	} while (choice != 2);

	return 0;
}