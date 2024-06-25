#include <bits/stdc++.h>
using namespace std;

int main()
{
    string operation;
    double num1, num2;

    cout << "enter first number: " << endl;
    cin >> num1;

    cout << "enter operation (+,-,*,/): " << endl;
    cin >> operation;

    cout << "enter second number: " << endl;
    cin >> num2;

    if (operation == "+")
    {
        cout << "Answer: " << num1 + num2;
    }
    else if (operation == "-")
    {
        cout << "Answer: " << num1 - num2;
    }
    else if (operation == "*")
    {
        cout << "Answer: " << num1 * num2;
    }
    else if (operation == "/")
    {
        cout << "Answer: " << num1 / num2;
    }
    else
    {
        cout << "cannot recognize operation" << endl;
    }
    return 0;
}