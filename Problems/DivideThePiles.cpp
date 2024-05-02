#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll gcd(ll a, ll b){
    if(a==0){
        return b;
    }
    return(gcd(b%a, a));
}

void solution(){
    ll n;cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    ll g = gcd(a[0], a[1]);
    for(int i=2;i<n;i++){
        g=gcd(g, a[i]);
    }

    if(g>=2) cout<<"Yes\n";
    else cout<<"No\n";
}

int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
    return 0;
}