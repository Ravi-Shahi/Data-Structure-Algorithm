#include <iostream>
using namespace std;

void fact(int num)
{
    int factorial = 1;
    for (int i = num; i > 0; i--)
    {
        factorial *= i;
    }
    cout << factorial;
    return;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    fact(n);
    return 0;
}
