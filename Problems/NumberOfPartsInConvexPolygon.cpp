#include <bits/stdc++.h>
using namespace std;

using ll = long long;
ll mod = 1e9+7;

ll binpow(ll a, ll b){
    ll ans=1;
    while(b){
        if(b%2==1){
            ans=(ans*a)%mod;
        }
        a=(a*a)%mod;
        b/=2;
    }
    return ans;
}

void solution(){
    ll n; cin>>n;
    n%=mod;
    //no. of diagonals
    ll n_diagonals = (n*(n-3)/2)%mod;
    //no. of intersection points
    ll x1 = (n*(n-1))%mod;
    ll x2 = ((n-2)*(n-3))%mod;
    ll x3 = (x1*x2)%mod;
    ll x4 = binpow(24, mod-2);
    ll n_intersections = (x3*x4)%mod;
    //finalissima
    cout<<(1+n_diagonals+n_intersections)%mod<<endl;
}

int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
    return 0;
}