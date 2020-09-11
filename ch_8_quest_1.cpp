#include <iostream>
#include<string>

using namespace std;
int main()
{
	char arr[100];
	char temp[100];

	int len = 0, j = 0;
	string str;

	cout << "Enter string:" << endl;

	getline(cin, str);
	len = str.length();

	 strcpy_s(arr, str.c_str());

	for (int i = 0; i < len; i++) {

		if (arr[i] == ' ' && arr[i + 1] == ' ')
			continue;

		if (arr[i] >= 65 && arr[i] <= 90) {
			temp[j++] = arr[i] + 32;

		}
		else {
			temp[j++] = arr[i];
		}

	}
	temp[0] = temp[0] - 32;

	cout << "Output string;" << endl;
	cout << endl;
	for (int i = 0; i < j; i++)
		cout << temp[i];


	return 0;
}