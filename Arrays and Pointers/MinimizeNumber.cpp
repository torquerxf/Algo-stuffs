#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n;cin>>n;
    int a[n];
    for(int &i : a){
        cin>>i;
        if(i&1){
            cout<<0<<"\n";
            return;
        }
    }
    // int freq[n]={0};
    int operations=0;
    int odd=0;
    while(odd!=1){
        for(int i=0;i<n;i++){
            if(a[i]%2==0){
                // freq[i]++;
                a[i]/=2;
                if(a[i]&1) odd=1;
            }
        }    
        operations++;
    }
    cout<<operations<<endl;
}

int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
    return 0;
}