// CGT 215 Lab 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

string text;
vector<char> cypher({ 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' });
int tempn;
char tempc;

int main()
{
    cout << "Please enter text to be cyphered: ";
    getline(cin, text);
    cout << "Encoded Message: ";
    for (char i : text)
    {
        if (i >= 65 && i <= 90)
        {
            i = i - 65;
            cout << cypher[i];
        }
        else if (i >= 97 && i <= 122)
        {
            i = i - 97;
            tempn = cypher[i];
            tempc = tempn + 32;
            cout << tempc;
        }
        else
        {
            cout << i;
        }
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
