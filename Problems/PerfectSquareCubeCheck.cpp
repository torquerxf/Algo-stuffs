#include <bits/stdc++.h>
using namespace std;

void solution(){
    int q,n;
    cin>>q>>n;
    if(n==1){
        cout<<"YES"<<"\n";
        return;
    }
    if(q==1){
        for (int i = 1; i <= n/2; i++)
        {
            
            if(i*i==n){
                cout<<"YES"<<"\n";
                return;
            }
        }
        cout<<"NO"<<"\n";
    }else if(q==2){
        for (int i = 1; i <= n/2; i++)
        {
            if(i*i*i==n){
                cout<<"YES"<<"\n";
                return;
            }
        }
        cout<<"NO"<<"\n";
    }
}

int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
    return 0;
}