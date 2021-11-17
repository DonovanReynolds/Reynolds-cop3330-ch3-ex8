#include <iostream>
using namespace std;

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
