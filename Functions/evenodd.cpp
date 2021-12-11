//Ques6. Write a program to find out whether a given number is even or odd using functions.
#include <iostream>
using namespace std;

bool isEven(int num)
{
    if (num % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    if (isEven(n))
    {
        cout << "Even";
    }
    else
    {
        cout << "odd";
    }
    return 0;
}
