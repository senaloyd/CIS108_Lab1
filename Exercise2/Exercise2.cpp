// Exercise2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<iostream>
#include<iomanip>
#include<fstream>
#include<sstream>
#include<cmath>
#include<cstdlib>
#include<string>
#include<list>
#include <forward_list>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include <array>
#include <regex>
#include<random>
#include<stdexcept>
using namespace std;
inline void keep_window_open() { char ch; cin >> ch; }


int main()
{
	cout << "Enter your first name: ";
	string first_name;
	cin >> first_name;
	cout << "Enter your last name: ";
	string last_name;
	cin >> last_name;
	cout << "Enter your age: ";
	int age;
	cin >> age;
	cout << "Enter your confidence in programmers in percentage (0-100): ";
	int confidence;
	cin >> confidence;
	int dog_years = age * 7;
	cout << "Hello, " << first_name << " " << last_name << " , nice to meet you! You might be "
		<< age << " in human years but in dog years you are " << dog_years << std::endl;
	double confidence_level = static_cast<double>(confidence / 100.0);
		if (confidence_level < 0.5) {
			cout << "I agree, programmers can't be trusted!" << std::endl;
	}
		else { 
			cout << "Writing good code takes hard work!" << std::endl;
	}
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
