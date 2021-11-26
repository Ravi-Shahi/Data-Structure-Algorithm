#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    int n, zeroPosition = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            if (i == zeroPosition && j==zeroPosition)
            {
                cout << "0";
                zeroPosition++;
            }
            else
            {
                cout << "1";
            }
        }
        cout << endl;
    }
}
