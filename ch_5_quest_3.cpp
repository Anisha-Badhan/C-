#include<iostream>
using namespace std;
int main()
{

	int curntHr, curntMin, waitHr, waitMin;
	int hrs, min;
	char next;
	bool nxt=true;
	while(nxt==true)
	{
		cout << "Enter present Hours:";
		cin >> curntHr;
		cout << "Enter present minutes:";
		cin >> curntMin;
		cout << "Enterthe number of hours to wait:";
		cin >> waitHr;
		cout << "Enter the number of minutes to wait:";
		cin >> waitMin;
		hrs = curntHr + waitHr;
		min = curntMin + waitMin;
		if (min >= 60)
		{
			hrs++;
			min = min - 60;
		}
		if (hrs > 12)
		{
			hrs = hrs % 12;
			cout << "The Time is :" << hrs << ":" << min << "PM" << endl;
		}
		else
		{
			cout << "The Time is :" << hrs << ":" << min << "AM" << endl;
		}
		cout << "Want to find next waiting time?(Y or N):  ";
		cin >> next;
		if (next == 'N' || next=='n') {
			nxt = false;
		}
	} 
	return 0;
}