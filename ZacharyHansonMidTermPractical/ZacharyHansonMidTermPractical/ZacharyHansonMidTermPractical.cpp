// ZacharyHansonMidTermPractical.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	char userInput;
	int score = 0;

	std::cout << "\t\t MULTIPLE CHOICE TEST\n";

	//Question 1
	std::cout << "1.) What is 10 + 10? \n";
	std::cout << "A) 20\nB) 30\nC) 15\nD) 0\n";
	std::cout << "Select Your Choice Then Press Enter: ";
	std::cin >> userInput;
	if (tolower(userInput) == 'a') {
		std::cout << "That is Correct!\n\n";
		score++;
	}
	else {
		std::cout << "WRONG!!\n\n";
	}


	//Question 2
	std::cout << "2.) Which vegetable gives Popeye his strength? \n";
	std::cout << "A) Broccoli\nB) Spinach\nC) Carrots\nD) Mushrooms\n";
	std::cout << "Select Your Choice Then Press Enter: ";
	std::cin >> userInput;
	if (tolower(userInput) == 'b') {
		std::cout << "That is Correct!\n\n";
		score++;
	}
	else {
		std::cout << "WRONG!!\n\n";
	}

	//Question 3
	std::cout << "3.) In which U.S. city is NASA’s Mission Control Center located? \n";
	std::cout << "A) Huntsville, Alabama\nB) Houston, Texas\nC) Hampton, Virginia\nD) Cape Canaveral, Florida\n";
	std::cout << "Select Your Choice Then Press Enter: ";
	std::cin >> userInput;
	if (tolower(userInput) == 'b') {
		std::cout << "That is Correct!\n\n";
		score++;
	}
	else {
		std::cout << "WRONG!!\n\n";
	}

	//Question 4
	std::cout << "4.) What is the largest freshwater lake in the world by surface area? \n";
	std::cout << "A) Lake Okeechobee\nB) Lake Victoria\nC) Lake Bikal\nD) Lake Superior\n";
	std::cout << "Select Your Choice Then Press Enter: ";
	std::cin >> userInput;
	if (tolower(userInput) == 'd') {
		std::cout << "That is Correct!\n\n";
		score++;
	}
	else {
		std::cout << "WRONG!!\n\n";
	}
	std::cout << "Your Score: " << score;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
