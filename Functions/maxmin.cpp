#include <iostream>
using namespace std;

int max(int num1, int num2, int num3)
{
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            return num1;
        }
        else
        {
            return num3;
        }
    }
    else
    {
        if (num2 > num3)
        {
            return num2;
        }
        else
        {
            return num3;
        }
    }
}

int min(int num1, int num2, int num3)
{
    if (num1 < num2)
    {
        if (num1 < num3)
        {
            return num1;
        }
        else
        {
            return num3;
        }
    }
    else
    {
        if (num2 < num3)
        {
            return num2;
        }
        else
        {
            return num3;
        }
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int a, b, c;
    cin >> a >> b >> c;
    cout << "Max number is " << max(a, b, c) << endl;
    cout << "Min number is " << min(a, b, c) << endl;
    return 0;
}