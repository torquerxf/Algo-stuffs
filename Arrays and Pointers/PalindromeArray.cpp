#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n;cin>>n;
    int a[n];
    for(int &i : a) cin>>i;
    int i=0,j=n-1;
    while(i<j){
        if(a[i]!=a[j]){
            cout<<"NO"<<endl;
            return;
        }
        i++;
        j--;
    }
    cout<<"YES"<<endl;
}

int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
    return 0;
}