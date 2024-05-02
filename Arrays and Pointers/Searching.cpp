#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n;cin>>n;
    int a[n];
    for(int &i : a) cin>>i;
    int x;cin>>x;

    for(int i=0;i<n;i++){
        if (a[i]==x){
            cout<<i<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}

int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
    return 0;
}