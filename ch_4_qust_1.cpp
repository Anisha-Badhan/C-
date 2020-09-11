#include <iostream>
#include <string>
using namespace std;

string tensnumber(int x)
{
	switch (x)
	{
	case 9: return "Ninety"; break;
	case 8: return "Eighty"; break;
	case 7: return "Seventy"; break;
	case 6: return "Sixty"; break;
	case 5: return "Fifty"; break;
	case 4: return "Forty"; break;
	case 3: return "Thirty"; break;
	case 2: return "Twenty"; break;
	case 1: return ""; break;
	case 0: return ""; break;
	}
}
string onesnumber(int x)
{
	switch (x)
	{
	case 9: return "-nine"; break;
	case 8: return "-eight"; break;
	case 7: return "-seven"; break;
	case 6: return "-six"; break;
	case 5: return "-five"; break;
	case 4: return "-four"; break;
	case 3: return "-three"; break;
	case 2: return "-two"; break;
	case 1: return "-one"; break;
	case 0: return ""; break;
	}
}
string teens(int x)
{
	switch (x)
	{
	case 19: return "Nineteen"; break;
	case 18: return "Eighteen"; break;
	case 17: return "Seventeen"; break;
	case 16: return "Sixteen"; break;
	case 15: return "Fifteen"; break;
	case 14: return "Fourteen"; break;
	case 13: return "Thirteen"; break;
	case 12: return "Twelve"; break;
	case 11: return "Eleven"; break;
	case 10: return "Ten"; break;
	}
}
string singles(int x)
{
	switch (x)
	{
	case 9: return "Nine"; break;
	case 8: return "Eight"; break;
	case 7: return "Seven"; break;
	case 6: return "Six"; break;
	case 5: return "Five"; break;
	case 4: return "Four"; break;
	case 3: return "Three"; break;
	case 2: return "Two"; break;
	case 1: return "One"; break;
	case 0: return ""; break;
	}
}
int main(void)
{
	int ones, tens;
	for (int i = 99; i >= 20; i--)
	{
		ones = i % 10;
		tens = i / 10;
		cout << tensnumber(tens) << onesnumber(ones) << " bottles of beer on the wall.\n";
		cout << tensnumber(tens) << onesnumber(ones) << " bottles of beer,\n" << "Take one down, pass it around,\n\n";
	}

	int teen;
	for (int i = 19; i >= 10; i--)
	{
		teen = i;
		cout << teens(teen) << " bottles of beer on the wall.\n";
		cout << teens(teen) << " bottles of beer,\n" << "Take one down, pass it around,\n\n";
	}
	int single;
	for (int i = 9; i >= 1; i--)
	{
		single = i;
		cout << singles(single) << " bottles of beer on the wall.\n";
		cout << singles(single) << " bottles of beer,\n" << "Take one down, pass it around,\n\n";

	}
	cout << "Zero bottles of beer on the wall.\n\n";
	return 0;
}