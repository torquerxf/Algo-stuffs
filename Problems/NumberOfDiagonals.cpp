#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll mod = 1e9+7;

void solution(){
    ll n;cin>>n;
    n%=mod;
    cout<<(n*(n-3)/2)%mod<<endl;
}

int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
    return 0;
}