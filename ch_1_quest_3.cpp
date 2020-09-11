// money.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int quaters, dimes, nickels;
	cout << "Enter the number of Quaters, Dimes and Nickels:  \n\n";
	cin >> quaters >> dimes >> nickels;
		int money = quaters * 25 + dimes * 10 + nickels * 5;
			cout << "The total money in cents is::  " << money;
		
		return 0;
}

