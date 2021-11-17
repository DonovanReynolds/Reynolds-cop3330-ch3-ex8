#include <iostream>
using namespace std;

/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Donovan Reynolds
 */

int main()
{
    int inputNum;
    bool isEven = false;


    cin >> inputNum;

    if (inputNum % 2 == 0)
        isEven = true;

    if (isEven)
        cout << "Your number " << inputNum <<" is even!";
    else
        cout << "Your number " << inputNum <<" is odd!";

    return 0;

}
