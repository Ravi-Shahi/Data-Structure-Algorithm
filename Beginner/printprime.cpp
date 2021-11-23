#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    int n, i = 3, j;
    cin>>n;
    bool isPrime = true;
    if (n > 2)
    {
        cout << "2\n";
        while (i < n)
        {
            for (j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    isPrime = false;
                    break;
                }
                else
                {
                    isPrime = true;
                }
            }
            if (isPrime)
            {
                cout << i << endl;
            }
            i++;
        }
    }
}