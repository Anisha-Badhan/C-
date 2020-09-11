// quest_13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int  age, num;
	float weight, height, BMR;
	char gender;
	cout << "are you a male or a female? write 'm' for male and 'f' for female...\n";
	cin >> gender;
	cout << "Enter your weight in pounds, height in inches and age in years::    \n";
	cin >> weight >> height >> age;
	if (gender == 'm') {
		BMR = 66 + (6.3 * weight) + (12.9 * height) + (6.8 * age);
		cout << "BMR= " << BMR << endl;
		num = BMR / 230;       //one choclate=230gm
		cout << "You should eat only " << num << " choclates to maintain your weight..\n";
	}
	else {
		BMR = 655 + (4.3 * weight) + (4.7 * height) + (4.7 * age);
		cout << "BMR= " << BMR << endl;
		num = BMR / 230;    //one choclate=230gm
		cout << "You should eat only " << num << " choclates to maintain your weight..\n";
	}return 0;
}

