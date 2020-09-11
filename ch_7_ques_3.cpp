#include <iostream>
using namespace std;

void delete_repeats(char a[], int size, int& number_used)
{
    char c;
    int index = 0;
    cout << "Please type in a sentence and then press enter.\n";
    cin.get(c);

    while (c != '\n' && index < size) {
        a[index] = c;
        cin.get(c);
        index++;
    }
    number_used = index;
    cout << "\nThe size of the array is " << number_used << endl;

    for (int i = 0; i < number_used; i++) {
        for (int j = i + 1; j < number_used; j++) {
            if (a[i] == a[j]) {
                number_used = number_used - 1;
                for (int k = j; k < number_used; k++)
                    a[k] = a[k + 1];
                a[number_used] = '\0';
                --j;
            }
        }
    }
}

void output(char a[], int& number_used)
{
    cout << "The new sentence without the repeated letters is:\n";
    for (int i = 0; i < number_used; i++) {
        cout << a[i];
    }
    cout << "\nThe new size of the array is " << number_used << endl;

    cin.ignore();
    cin.get();
}
int main()
{
    char array[100];
    int number_used;
    delete_repeats(array, 100, number_used);
    output(array, number_used);
}

