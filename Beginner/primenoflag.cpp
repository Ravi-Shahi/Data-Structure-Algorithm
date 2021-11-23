#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../input.txt", "r", stdin);
        freopen("../output.txt", "w", stdout);
    #endif
    int n,i;
    cin>>n;
    for(i=2;i<n;i++){
        if(n%i==0){
            break;
        }
    }
    if(i==n){
        cout<<"Your number is PRIME";
    }else{
        cout<<"Not PRIME";
    }
}