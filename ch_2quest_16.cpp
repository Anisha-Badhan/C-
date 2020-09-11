// quest_16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;
int main()
{
    string gender, character, style;
    cout << "Are you a male or female??  \n";
    cin >> gender;
    cout << "superhero or supervillain?? \n";
    cin >> character;
        if (character == "supervillain") {
            cout << "You should get a Mohawk..\n";
            return 0;
        }
        if (gender == "male") {
            cout << "steak or sushi..\n";
            cin >> style;
            if (style == "steak") {
                cout << "You should have a flat top..\n";
                
                }
            else {
                cout << "You should have a Pompadour...\n";
            }
        
        }
        else {
            cout << "anime or sitcom??..\n";
            cin >> style;
            if (style == "anime") {
                cout << "you should go with bangs....\n";

            }
            else {
                cout << "You should go with bob...\n";
            }
        }
        return 0;
}


