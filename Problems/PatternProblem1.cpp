#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n,m;cin>>n>>m;
    for (int i = 0; i < 3*n+1; i++)
    {
        for (int j = 0; j < 3*m+1; j++)
        {
            if(i%3==0 || j%3==0){
                cout<<"*";
            }
            else cout<<".";
        }
        cout<<endl;
    }
    
}

int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
    return 0;
}
