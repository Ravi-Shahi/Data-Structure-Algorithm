#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int size;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        for (int j = size; j> i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}