#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int n, reverse = 0;
    cin >> n;
    while (n > 0)
    {
        int lastDigit =n%10;
        cout<<lastDigit;
        reverse = reverse*10 + lastDigit;
        cout<<reverse<<endl;
        n /= 10;
    }
    cout << reverse << endl;
}