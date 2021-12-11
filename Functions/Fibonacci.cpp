#include <iostream>
using namespace std;

void fib(int num)
{
    int t1 = 0;
    int t2 = 1;
    for (int i = 1; i <= num; i++)
    {
        cout << t1 << " ";
        int nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
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
    fib(n);
    return 0;
}
