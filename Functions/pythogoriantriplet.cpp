#include <iostream>
using namespace std;
//Pythogorian Triplet
bool isPyTriplet(int x, int y, int z)
{
    int a = max(x, max(y, z));
    int b, c;
    if (x == a)
    {
        b = y;
        c = z;
    }
    else if (y == a)
    {
        b = x;
        c = z;
    }
    else
    {
        b = x;
        c = y;
    }
    //a^2 = b^2+c^2;
    if (a * a == b * b + c * c)
        return true;
    else
        return false;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    int a, b, c;
    cin >> a >> b >> c;
    if (isPyTriplet(a, b, c))
        cout << "Pythogorian Triplet";
    else
        cout << "Not a Pythogorian Triplet";
    return 0;
}
