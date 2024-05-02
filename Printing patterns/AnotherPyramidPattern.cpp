#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n;cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n-i; j > 0; j--)
        {
            cout<<"  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<j<<" ";
        }
        for (int j = i-1; j > 0; j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
    return 0;
}