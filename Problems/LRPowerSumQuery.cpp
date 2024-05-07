#include <bits/stdc++.h>
using namespace std;

using ll = long long;
ll mod = 1e9+7;
const int N = 1000100;

ll binpow(ll a, ll b){
    ll ans =1;
    while(b){
        if(b%2==1){
            ans =  ans*a %mod;
        }
        a = a*a%mod;
        b/=2;
    }
    return ans;
}

ll kpowl(ll k, ll l){
    ll res = binpow(k,l);
    res = binpow(res, mod-2);
    return res;
}

void solution(){
    ll n, q, k;
    cin>>n>>q>>k;
    // ans = summation (a[i]*k^(i-L))

    ll a[N];
    a[0]=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        a[i] = a[i]*(binpow(k,i))%mod;
    }
    //prefix sum for a[i]*k^i
    for(int i=1;i<=n;i++){
        a[i] += a[i-1];
        a[i]%=mod;
    }

    for(int i=1;i<=q; i++){
        ll l, r;
        cin>>l>>r;

        ll x1 = kpowl(k,l); // contains inverse of k^l
        ll ans = (a[r]-a[l-1])%mod;
        ans = (ans*x1)%mod;
        cout<<(ans%mod + mod)%mod<<endl;
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