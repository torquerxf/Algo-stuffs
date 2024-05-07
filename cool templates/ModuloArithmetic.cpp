#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 200010;
int fact[N];
ll mod = 1e9+7;

void pre(){
    fact[0]=1;
    for(int i=1;i<N;i++){
        fact[i]=(fact[i-1]*i)%mod;
    }
}

ll binpow(ll a,ll b){
    int ans=1;
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
    
}

int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
    return 0;
}