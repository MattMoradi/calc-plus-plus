#include <iostream>
#include <sstream>
#include <vector>
#include <string>
//#include <cstdlib>

//Calculator in 10 minutes here we go

int main()
{
	std::cout << "Enter calculation: ";
	std::string userInput;
	//std::cin >> userInput;
	getline(std::cin, userInput);

	std::vector<std::string> nums;
	std::stringstream sstream(userInput);
	std::string indivString;
	char space = ' ';

	while (std::getline(sstream, indivString, space))
	{
		nums.push_back(indivString);
	}

	//std::cout << nums[1];

	double firstNum = std::stod(nums[0]);
	double secondNum = std::stod(nums[2]);
	double answer;

	// Evaluate needed decimals based on input

	if (nums[1] == "+")
	{
		// Insert vector operator into printf
		answer = firstNum + secondNum;
		printf("%2f + %3f = %f", firstNum, secondNum, answer);
	}
	else if (nums[1] == "-")
	{
		answer = firstNum - secondNum;
		printf("%2f - %3f = %f", firstNum, secondNum, answer);
	}
	else if (nums[1] == "*")
	{
		answer = firstNum * secondNum;
		printf("%2f x %3f = %f", firstNum, secondNum, answer);
	}
	else if (nums[1] == "/")
	{
		answer = firstNum / secondNum;
		printf("%2f / %3f = %f", firstNum, secondNum, answer);
	}
	else if (nums[1] == "%")
	{
		answer = fmod(firstNum, secondNum);
		printf("%2f %% %3f = %f", firstNum, secondNum, answer);
	}
	else
	{
		std::cout << "Please enter better values." << "\n";
	}

	//std::cout << answer << std::endl;

	return 0;
}