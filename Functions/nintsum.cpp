#include <iostream>
using namespace std;

int sumShort(int n)
{
    int sum = n * (n + 1) / 2;
    return sum;
}

int sum(int n)
{
    int sum = 0;
    for (int i = 1; i = n; i++)
        sum += i;
    return sum;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    cout << sumShort(n) << endl;
    cout << sum(n) << endl;
    return 0;
}
