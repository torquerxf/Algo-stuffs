#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n;cin>>n;
    int a[n];
    for(int &i : a) cin>>i;

    int i=0, j=n-1;
    while(i<j){
        swap(a[i],a[j]);
        i++;
        j--;
    }
    for(int &i : a){
        cout<<i<<" ";
    }
}

int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
    return 0;
}