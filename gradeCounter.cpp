// gradeCounter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
    //std::cout << "Hello World!\n"; 
	int total{ 0 };
	unsigned int gradeCounter{ 1 };

	while (gradeCounter <= 10)
	{
		cout << "Enter grade: ";
		int grade;
		cin >> grade;
		total += grade;
		gradeCounter += 1;

	}

	int average{ total / 10 };
	cout << "Total is: " << total << endl;
	cout << "Average is: " << average << endl;
	system("pause");

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
