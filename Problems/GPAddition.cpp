#include <bits/stdc++.h>
using namespace std;

using ll = long long;
ll mod = 1e9+7;
const int N = 1000100;

ll binpow(ll a, ll b){
    ll ans =1;
    while(b){
        if(b%2==1){
            ans = ans*a %mod;
        }
        a = a*a %mod;
        b/=2;
    }
    return ans;
}

ll kpowl(ll k,ll l){
    ll res = binpow(k,l);
    res = binpow(res, mod-2);
}

void solution(){
    ll n, q, k;
    cin>>n>>q>>k;
    
    ll p[N] = {0};
    ll rpow[N];
    rpow[0] = 1;
    for(int i=1;i<=n;i++){
        rpow[i] = (rpow[i-1]*k)%mod;
    }

    for(ll i=1;i<=q;i++){
        ll a, l, r;
        cin>>a>>l>>r;
    
        p[l] += a;
        p[r+1] -= a*rpow[r-l+1];
        p[r+1] %=mod;
    }

    for(ll i=1;i<=n;i++){
        p[i] += p[i-1]*k;
        p[i]%=mod;
        p[i] = (p[i]%mod+mod)%mod;
    }
    for(ll i=1;i<=n;i++){
        cout<<p[i]<<" ";
    }
}


int main(){
    int t=1;
    // cin>>t;
    while(t--){
        solution();
    }
    return 0;
}