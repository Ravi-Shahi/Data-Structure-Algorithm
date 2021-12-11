/*
binary coefficient (nCr)= n!/r!(n-r)!
*/
#include <iostream>
using namespace std;

int fact(int num)
{
    int factorial = 1;
    for (int i = num; i > 0; i--)
    {
        factorial *= i;
    }
    return factorial;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int n, r;
    cin >> n >> r;
    int ans = fact(n) / fact(n - r) * fact(r);
    cout << ans;
    return 0;
}