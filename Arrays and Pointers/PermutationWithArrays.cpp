#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n;cin>>n;
    int a[n],b[n];
    for(int &i : a) cin>>i;
    for(int &i : b) cin>>i;

    sort(a, a+n);
    sort(b, b+n);
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            cout<<"no"<<endl;
            return;
        }
    }
    cout<<"yes"<<endl;
}

int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
    return 0;
}