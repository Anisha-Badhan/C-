// Quest_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int acc, time, result, distance;
    cout << "Enter the value of acceleration and time: \n";
    cin >> acc >> time;
    result = acc * time * time;
    distance = result/2;
    cout << "The distance covered by the object will be:  "<<distance;
    cout << endl;
}
