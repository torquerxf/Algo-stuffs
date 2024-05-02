#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n,m;cin>>n>>m;
    int a[n], b[m];
    for(int &i:a) cin>>i;
    for(int &i:b) cin>>i;
    
    int index=0;
    for(int i=0;i<n;i++){
        if(a[i]==b[index]){
            index++;
        }
    }
    if(index==m){
        cout<<"YES"<<endl;
    }else cout<<"NO"<<endl;
}

int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
    return 0;
}