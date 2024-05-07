#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll mod = 1e9+7;

ll binpow(ll a, ll b){
    ll ans = 1;
    while(b){
        if(b%2==1){
            ans = ans*a %mod;
        }
        a = a*a %mod;
        b/=2;
    }
    return ans;
}

void solution(){
    ll n;cin>>n;
    n%=mod;
    // nC4
    ll x1 = (((n-3)%mod)*((n-2)%mod))%mod;
    ll x2 = (((n-1)%mod)*(n%mod))%mod;
    ll x3 = ((x1%mod)*(x2%mod))%mod;
    ll x4 = binpow(24, mod-2);
    ll ans = ((x3%mod)*(x4%mod))%mod;
    cout<<ans<<endl;
}

int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
    return 0;
}