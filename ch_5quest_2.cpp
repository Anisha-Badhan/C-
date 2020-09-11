#include <iostream>
using namespace std;

void waitTime() {
    int curntHr, curntMin, waitHr, waitMin, totalHr, totalMin ;
    char next;
    bool nxt=true;
    while (nxt == true) {
        cout << "\nEnter the current hour(in 24 hr notation): ";
        cin >> curntHr;
        cout << "\nEnter current minutes: ";
        cin >> curntMin;
        cout << "\nEnter the waiting hours(in 24 hr notation): ";
        cin >> waitHr;
        cout << "\nEnter the waiting minutes: ";
        cin >> waitMin;
        if (curntHr < 25 && curntMin < 61 && waitHr < 25 && waitMin < 61) {
            totalHr = curntHr + waitHr;
            totalMin = curntMin + waitMin;
            if (totalMin >= 60) {
                totalHr = totalHr + 1;
                totalMin = totalMin - 60;
            }
            cout << "\nThe time after waiting period will be: " << totalHr << ":" << totalMin << endl;
            cout << "\nWant to check another time?(Y or N): ";
            cin >> next;
            if (next == 'N' || next == 'n') {
                nxt = false;
            }
        }
        else {
            cout << "Enter valid time\n";
           }
    }
                }
int main()
{
    waitTime();
    return 0;
}