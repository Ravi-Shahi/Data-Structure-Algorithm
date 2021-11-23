#include <iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int n, i = 2;
    bool isPrime = true;
    cin >> n;
    cout << "Your number is: " << n << endl;
    if (n != 2)
    {
        while (i < n)
        {

            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
            i++;
        }
    }
    if (isPrime == true)
    {
        cout << "Your number is Prime \n";
    }
    else
    {
        cout << "Your number is not Prime \n";
    }
}