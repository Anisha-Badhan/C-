#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a, b, c, root1, root2, realPart, imgPart, disc;
    char another;
	cout << "\n\nFinding roots for quardratic equation of type ax^2+bx+c=0\n\n";
    do {
        cout << "\n\nEnter the values of a,b and c\n\n";
        cin >> a >> b >> c;
        disc = b * b - 4 * a * c;
        if (disc > 0) {
            root1 = (-b + sqrt(disc)) / (2 * a);
            root2 = (-b - sqrt(disc)) / (2 * a);
            cout << "Roots are real and different." << endl;
            cout << "root1 = " << root1 << endl;
            cout << "root2 = " << root2 << endl;
        }

        else if (disc == 0) {
            cout << "Roots are real and identical." << endl;
            root1 = (-b + sqrt(disc)) / (2 * a);
            cout << "root1 = root2 =" << root1 << endl;
        }

        else {
            realPart = -b / (2 * a);
            imgPart = sqrt(-disc) / (2 * a);
            cout << "Roots are complex and different." << endl;
            cout << "root1 = " << realPart << "+" << imgPart << "i" << endl;
            cout << "root2 = " << realPart << "-" << imgPart << "i" << endl;
        }
        cout << "Want to solve another equation??\n";
        cin >> another;
    }
    while (another == 'Y' || another == 'y');
    return 0;
}



