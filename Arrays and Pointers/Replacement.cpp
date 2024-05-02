#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n;cin>>n;
    int a[n];
    for(int &i : a){
        cin>>i;
        if(i > 0) i=1;
        else if(i < 0) i=2;
    }
    
    for(int &i : a){
        cout<<i<<" ";
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