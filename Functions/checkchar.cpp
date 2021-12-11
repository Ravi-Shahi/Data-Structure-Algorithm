/*
For capital alphabets 65 – 90
For small alphabets 97 – 122
For digits 48 – 57
*/
#include <iostream>
using namespace std;

void checkChar(char input)
{
    if (input >= 65 && input <= 90 || input >= 97 && input <= 122)
    {
        cout << "Alphabet";
    }
    else
    {
        cout << "Not a Aplhabet";
    }
    return;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    char ch;
    cin >> ch;
    checkChar(ch);
    return 0;
}
