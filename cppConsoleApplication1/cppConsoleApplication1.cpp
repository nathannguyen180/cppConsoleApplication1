// cppConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

int main()
{
   /* std::cout << "Hello World!\n";

	int tip = 0;

	std::cout << "Enter tip amount: ";
	std::cin >> tip;
	std::cout << "You paid " << tip << " dollars.\n";


	double tempf;
	double tempc;

	// Ask the user
	std::cout << "Enter the temperature in Fahrenheit: ";
	std::cin >> tempf;

	tempc = (tempf - 32) / 1.8;

	std::cout << "The temp is " << tempc << " degrees Celsius.\n";

	double height, weight, bmi;

	// Ask user for their height

	std::cout << "Type in your height (m): ";
	std::cin >> height;

	// Now ask the user for their weight and calculate BMI

	std::cout << "weight? ";
	std::cin >> weight;

	bmi = weight / (height * height);

	std::cout << bmi <<"\n";

	// Create a number that's 0 or 1

//	srand(time(NULL));
	int	coin = rand() % 2;

	// If number is 0: Heads
	// If it is not 0: Tails

	if (coin == 0) {

		std::cout << "Heads\n";

	}
	else {

		std::cout << "Tails\n";

	}

	double ph = 4.6;

	// Write the if, else if, else here:
	if (ph > 7) {
		std::cout << "Basic";
	}
	else if (ph < 7) {
		std::cout << "Acidic";
	}
	else {
		std::cout << "Neutral";
	}

	int number = 9;

	switch (number) {

	case 1:
		std::cout << "Bulbusaur\n";
		break;
	case 2:
		std::cout << "Ivysaur\n";
		break;
	case 3:
		std::cout << "Venusaur\n";
		break;
	case 4:
		std::cout << "Charmander\n";
		break;
	case 5:
		std::cout << "Charmeleon\n";
		break;
	case 6:
		std::cout << "Charizard\n";
		break;
	case 7:
		std::cout << "Squirle\n";
		break;
	case 8:
		std::cout << "Wartortle\n";
		break;
	case 9:
		std::cout << "Blastoise\n";
		break;
	default:
		std::cout << "Unknown\n";
		break;

	}

	int year;
	std::cout << "Year? ";
	std::cin >> year;

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		std::cout << "thats a leap year";
	}*/

	/*int guess;

	int tries = 0;

	std::cout << "I have a number 1-10.\n";
	std::cout << "Please guess it: ";
	std::cin >> guess;

	// Write a while loop here:

	while (guess != 8 && tries > -1) {
		std::cout << "Wrong guess, try again: ";
		std::cin >> guess;
		tries++;
	}

	if (guess == 8) {

		std::cout << "You got it!\n";

	}

	  std::vector<std::string> last_jedi;
  
  // Add characters here:
  
  last_jedi.push_back("kylo");
  last_jedi.push_back("rey");
  last_jedi.push_back("luke");
  last_jedi.push_back("finn");
  last_jedi.push_back("");
  
  std::cout << last_jedi[0] << " ";
  std::cout << last_jedi[1] << " ";
  std::cout << last_jedi[2] << " ";
  std::cout << last_jedi[3] << " ";

  std::vector<double> delivery_order;

  delivery_order.push_back(8.99);
  delivery_order.push_back(3.75);
  delivery_order.push_back(0.99);
  delivery_order.push_back(5.99);

  // Calculate the total using a for loop:

  double total = 0.0;
  for (int i = 0; i < delivery_order.size(); i++) {
	  total += delivery_order[i];
  }

  std::cout << total;*/



std::vector<int> num = { 2, 4, 3, 6, 1, 9 };
int sum = 0; 
int product = 1;

for (int i = 0; i < num.size(); i++) {
	if (num[i] % 2 == 0) {
		sum += num[i];
	}
	else {
		product *= num[i];
	}
}

std::cout << "sum: " << sum << "\n";
std::cout << "product: " << product;







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
