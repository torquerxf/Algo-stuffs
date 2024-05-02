#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n;
    cin>>n;
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<'*';
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