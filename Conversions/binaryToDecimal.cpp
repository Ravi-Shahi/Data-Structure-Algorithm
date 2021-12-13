#include <bits/stdc++.h>
using namespace std;
/*
000 --> 0
001 --> 1
010 --> 2
011 --> 3
100 --> 4
101 --> 5
110 --> 6
111 --> 7
*/
int binaryToDecimal(int num)
{
    int decimal = 0, power = 1;
    while (num > 0)
    {
        int lastDigit = num % 10;
        decimal += lastDigit * power;
        num /= 10;
        power *= 2;
    }
    return decimal;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    int binaryNum;
    cin >> binaryNum;
    cout << binaryToDecimal(binaryNum);
    return 0;
}