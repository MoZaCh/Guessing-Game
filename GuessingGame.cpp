#include <iostream>
#include <chrono>
#include <thread>
#include <string>
#include <cstdlib>
#include <ctime>

using std::string;

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
			system("CLS");
			break;
		case 2:
			std::cout << "Exiting game..." << std::endl;
			system("CLS");
			return 0;
		}
	} while (choice != 2);

	return 0;
}