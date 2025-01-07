#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    // connecting our file with a hout stream
    ofstream hout("sample60.txt");
    cout << "Enter your name ";

    // creating a name string and fillling it with the string entered by the user
    string name;
    cin >> name;

    // Writing a string to the file
    hout << name;
    hout.close();

    ifstream hin("sample60.txt");
    string content;
    hin >> content;
    cout << "the content of this file is " << content;
    hin.close();

    return 0;
}