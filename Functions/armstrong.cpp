#include <iostream>
#include <math.h>
using namespace std;

bool isArm(int n)
{
    int lastDigit, sum = 0, originaln = n;
    bool armstrong;
    while (n > 0)
    {
        lastDigit = n % 10;
        sum += pow(lastDigit, 3);
        n = n / 10;
    }
    if (originaln == sum)
    {
        armstrong = 0;
    }
    else
    {
        armstrong = 1;
    }
    return armstrong;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    bool armStatus = isArm(n);
    if (armStatus == 1)
    {
        cout << "This is not ArmStrong Try Again!";
        //it's like predefine input so not calling funciton again;
    }
    else
    {
        cout << "Congratulation, Your number is armstrong";
    }
    return 0;
}