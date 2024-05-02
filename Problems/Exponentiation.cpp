#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll binpow(ll a, ll b, ll mod){
    ll ans = 1;
    while(b){
        if(b%2 == 1){
            ans = ((ans%mod)*(a%mod))%mod;
        }
        a = ((a%mod)*(a%mod))%mod;
        b/=2;
    }
    return ans;
}

void solution(){
    ll a, b, c, p;
    cin>>a>>b>>c>>p;
    if (b == 0 && c != 0) {
        cout << '1' << '\n';
    }else if (a % p == 0 || a == 0) {
    cout << "0\n";
    }else{
        ll x = binpow(b, c, p-1);
        ll ans = binpow(a, x, p);
        cout<<ans<<endl;
    } 
}

int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
    return 0;
}