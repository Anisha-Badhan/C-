// quest_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string day;
    char another;
    double duration, starttime;
    float rate;
    float bill;
   
    do {
        cout << "Enter the day (eg. MO for Monday)\n";
        cin >> day;
        cout << "Enter the time when call started (eg. 2200 for 10:00 PM, 800 for 8 AM )\n";
        cin >> starttime;
        cout << "Enter the duration of call in minutes: \n";
        cin >> duration;
        if (day == "MO" || day == "TU" || day == "WE" || day == "TH" || day == "FR" || day == "mo" || day == "tu" || day == "we" || day == "th" || day == "fr") {
            if (starttime <= 800 && starttime >= 1800) {
                rate = 0.40;
                cout << "The rate will be 0.40 per minute\n\n";
            }
            else {
                rate = 0.25;
                cout << "The rate will be 0.25 per minute\n\n";
            }
        }
        else {
            rate = 0.15;
        }
        bill = rate * duration;
        cout << "Your bill is " << bill << endl;
        cout << "Do you want to calculate another bill?? (Y/N)\n";
        cin >> another;
        cout << endl;
    } while (another == 'Y' || another == 'y');
        return 0;
        
}

