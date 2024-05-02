#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n;cin>>n;
    int a[n];
    for(int &i: a) cin>>i;
    int Op=0;
    for (int i = 1; i < n; i++){
        if(a[i]<a[i-1]){
            Op+=(a[i-1]-a[i]);
            a[i]+=(a[i-1]-a[i]);
        }
    }
    cout<<Op<<"\n";
}

int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
    return 0;
}