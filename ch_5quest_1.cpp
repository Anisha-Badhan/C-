#include <iostream>
using namespace std;
void timeFormateConversion(){
    int hr, min;
        int hr12=0;
    char AP;
    char nxt;
    bool next = true;
    while (next == true) {
        cout << "Enter the hour: ";
        cin >> hr;
        cout << "\nEnter the minutes: ";
        cin >> min;
        cout << "The time you entered in 24 hrs format is " << hr << ":" << min << endl;
        if ((hr > 12) && (hr <= 24) && (min < 60)) {
            hr12 = hr % 12;
            AP = 'P';
            cout << "The time in 12-hour notation is: " << hr12 << ":" << min << AP << "M" << endl;
        }
        else if ((hr <= 12) && (hr >= 0) && (min < 60)) {
            hr12 = hr;
            AP = 'A';
            cout << "The time in 12-hour notation is: " << hr12 << ":" << min << AP << "M" << endl;
        }
        else {
            cout << "Enter valid time" << endl;
        }cout << "want to enter next time? (Y or N) : ";
        cin >> nxt;
        if (nxt == 'N') {
            next = false;
            }
    }
    
    }
int main()
{
    timeFormateConversion();
    return 0;
}