// play play 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cinttypes>
#include <string>




void userName(std::string&);

void userScore(int32_t&);

void print(int32_t, std::string);

void main()
{
	std::string name;
	int32_t score;

	userName(name);
	userScore(score);
	print(score, name);
	system("pause");
	system("TITLE grade calc");

//weeeeeee	
	return;
}

void userName(std::string& inputName)
{
	std::cout << "please input name: ";
	std::cin >> inputName;
	std::cout << std::endl;
}

void userScore(int32_t& inputScore)
{
	std::cout << "Please input user score between 0 - 100: ";
	std::cin >> inputScore;
	std::cout << std::endl;
}

void print(int32_t outputScore, std::string outputName)
{
	std::cout << outputName << " your score was " << outputScore << std::endl;
	if (outputScore > 100)
	{
	std::cout << "not possible" << std::endl;
	}

	else if (outputScore >= 90)
	{
		std::cout << "Your're an A+ student." << std::endl;
	
	}
	 else if (outputScore >= 80)
	{
		std::cout << "You're an A student." << std::endl;
	}
	else if (outputScore >= 70)
	{
		std::cout << "You're a B student." << std::endl;
	}
	 else if (outputScore >= 60)
	{
		std::cout << "You're a C student." << std::endl;
	}
	 else if (outputScore >= 40)
	 {
		 std::cout << "You're a D student." << std::endl;
	 }
	 else if (outputScore < 40)
	{
		std::cout << "You have failed. Pleaase see teacher" << std::endl;
	}
}
