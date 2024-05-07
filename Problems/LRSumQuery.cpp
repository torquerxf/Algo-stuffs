#include <bits/stdc++.h>
using namespace std;

using ll = long long;
ll mod = 1e9+7;

void solution(){
    int n, q;cin>>n>>q;
    ll a[n];
    ll p[n];
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    p[0]=a[0];
    for(int i=1;i<n;i++){
        p[i] = a[i]+p[i-1];
        if(p[i]<0){
            p[i] = (p[i]%mod+mod)%mod;
        }
    }
     while(q--){
        int l, r;cin>>l>>r;
        ll ans = (p[r-1]-p[l-2])%mod;
        if(ans<0) ans = (ans%mod + mod)%mod;
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
