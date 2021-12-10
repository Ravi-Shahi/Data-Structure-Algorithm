#include <iostream>
using namespace std;

int add(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    int a, b;
    cin >> a >> b;
    int sum = add(a, b);
    cout << "Sum of your numbers:\n" << sum;
}