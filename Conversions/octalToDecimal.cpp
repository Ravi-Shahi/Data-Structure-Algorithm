#include <bits/stdc++.h>
using namespace std;

int octalToDecimal(int num)
{
    int decimal = 0, power = 1;
    while (num > 0)
    {
        int lastDigit = num % 10;
        decimal += lastDigit * power;
        power *= 8;
        num /= 10;
    }
    return decimal;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    cout << octalToDecimal(n);
}