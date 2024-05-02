#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n,m;cin>>n>>m;
    int a[n];
    int ans[m+1]={0};
    for(int &i : a){
        cin>>i;
        ans[i]++;
    }
    for(int i=1;i<=m;i++){
        cout<<ans[i]<<endl;
    }
}

int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
    return 0;
}