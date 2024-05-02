#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll gcd(ll a, ll b){
    if(a==0){
        return b;
    }
    return gcd(b%a, a);
}

void solution(){
    ll a, b, c; cin>>a>>b>>c;
    if(a > b){
        swap(a, b);
    }
    ll g = gcd(a,b);
    if(c%g == 0){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
}

int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
    return 0;
}