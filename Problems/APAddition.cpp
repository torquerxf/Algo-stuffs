#include <bits/stdc++.h>
using namespace std;

using ll = long long;
ll mod = 1e9+7;
const int N = 1000100;

void solution(){
    ll n, q;
    cin>>n>>q;
    ll p1[N]={0};
    ll p2[N]={0};
    for (ll i = 1; i <= q; i++)
    {
        ll a, d, l, r;
        cin>>a>>d>>l>>r;

        p1[l] += (a-l*d)%mod;
        p1[r+1] -= (a-l*d)%mod;

        p2[l] +=d;
        p2[r+1] -=d;
    }
    ll ans[N];
    for(ll i=1;i<=n;i++){
        p1[i] = (p1[i] + p1[i-1])%mod;
        p2[i] = (p2[i] + p2[i-1])%mod;

        ans[i] = (p1[i] + (p2[i]*i)%mod)%mod;
        if(ans[i]<0) ans[i] = (ans[i]%mod + mod)%mod;
    }

    for(ll i=1;i<=n;i++){
        cout<<ans[i]<<" ";
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