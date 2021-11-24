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
    for (int i = size; i > 0; i--)
    {
        for (int j = 0; j <=size; j++)
        {
            if(j<i){
                cout<<" ";
            }else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}