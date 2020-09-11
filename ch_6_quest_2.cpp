#include <iostream> 
#include <iomanip> 
#include <fstream> 
#include <string> 
using namespace std;

void calculate(ifstream&, ofstream&);

int main()
{
    ifstream inFile;
    ofstream outFile;

    inFile.open("classgrades.txt");

    if (inFile.fail())
    {
        cout << "Failed to open the file/n";
        exit(1);
    }

    outFile.open("classgrades2.txt");
    calculate(inFile, outFile);
    outFile.close();
    inFile.close();
        
    return 0;
}

void calculate(ifstream& inFile, ofstream& outFile)

{
    int i, sum, a[10];
    string first, last;
    double avg;
    inFile >> first;
    while (inFile){
        sum = 0;
        inFile >> last;
        for (i = 0; i < 10; i++)
        {
            inFile >> a[i];
            sum += a[i];
        }

        outFile << first << " " << last << " ";
        for (i = 0; i < 10; i++)
            outFile << a[i] << " ";
        avg = sum / 10.00;
        outFile << std::setprecision(2) << std::fixed << avg << endl;
        inFile >> first;
    }
}