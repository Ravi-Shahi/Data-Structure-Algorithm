#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int n, j;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (; j <= n; j++)
        {
            cout << "*";
        }
        for (; j <= n + i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n; i > 0; i--)
    {

        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (; j <= n; j++)
        {
            cout << "*";
        }
        for (; j <= n + i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}