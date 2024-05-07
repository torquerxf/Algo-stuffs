#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 200100;
int fact[N];
ll mod = 1e9+7;

// binary exponentiation
ll binpow(ll a,ll b)
{
    if(b==0) return 1;
    if(b%2) return (a*binpow(a,b-1))%mod;
    else{
        ll temp=binpow(a,b/2);
        return (temp*temp)%mod;
    }
}

//factorial pre calcs
void pre(){
    fact[0]=1;
    for(int i = 1; i < N; i++)
        fact[i] = (fact[i-1]*i)%mod;
    return;
}

void solution(){
    ll n, m;cin>>n>>m;

    n%=mod;
    m%=mod;

    pre();

    ll ans = (((fact[n+m]*binpow(fact[n],mod-2))%mod)*binpow(fact[m],mod-2))%mod;
    cout<<ans%mod<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}