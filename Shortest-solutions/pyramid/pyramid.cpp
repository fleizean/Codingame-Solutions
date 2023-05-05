#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    string character;
    getline(cin, character);
    string x;
    getline(cin, x);
    int space = 0;
    int height = std::stoi(x);
    int star = 0;
    for(int i = 0; i < height; i++)
    {
        space = height - i - 1;
        star = 2 * i + 1;
        for (int j = 0; j < space; j++) {
            cout << " ";
        }
        for (int j = 0; j < star; j++)
            cout << character;
        cout << endl;
    }
}