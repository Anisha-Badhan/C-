

#include <iostream>
using namespace std;
int main()
{
	char input;
	double total=0.00;
	bool paid = false;
	while (paid == false) {
		cout << "\nEnter 'D' for dollor, 'q' for quater, 'd' for dime and 'n' for nickel\n";
		cout << "Please insert the coins for $" << 3.50 - total << ":  ";
		cin >> input;
		if (input == 'D') {
			total += 1;
		}
		else if (input == 'q') {
			total += 0.25;
		}
		else if (input == 'd') {
			total += 0.10;
		}
		else if (input == 'n') {
			total += 0.05;
		}
		else {
			cout << "Invalid input\n";
		}
		if (total >= 3.50) {
			
			cout << "\nEnjoy your Twinky\n";
			cout << "\nYour change is $" << total - 3.50 << "\n\n";
			cout << "\n Have a great day\n";
			paid = true;

		}
		
	}
	return 0;
}