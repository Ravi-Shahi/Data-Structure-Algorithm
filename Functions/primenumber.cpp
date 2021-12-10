#include <iostream>
using namespace std;

void checkPrime(int num)
{
    bool isPrime = 0;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            isPrime = 1;
            break;
        }
    }
    if (isPrime == 0)
    {
        cout << "Your number is "<<num<<" and it is Prime." << endl;
    }
    else
    {
        cout << "Your number is not Prime." << endl;
    }
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
    checkPrime(n);
    return 0;
}