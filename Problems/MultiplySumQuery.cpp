#include <bits/stdc++.h>
using namespace std;

using ll = long long;
ll mod = 1e9+7;
const int N=200100;

void solution(){
    ll n, q;
    cin>>n>>q;
    ll a[N];
    ll b[N];
    a[0]=0;
    b[0]=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        b[i]=(a[i]*i)%mod;
    }
    for(int i=1;i<=n;i++){
        a[i] = (a[i] + a[i-1])%mod;
        b[i] = (b[i] + b[i-1])%mod;
    }
    
    while(q--){
        ll l, r;
        cin>>l>>r;
        ll x1 = ((1-l)%mod*(a[r]-a[l-1])%mod)%mod;
        ll x2 = (b[r]-b[l-1])%mod;
        ll ans = (x1+x2)%mod;
        if(ans<0) ans=(ans%mod+mod)%mod;
        cout<<ans<<endl;
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