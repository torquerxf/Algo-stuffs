#include <bits/stdc++.h>
using namespace std;

using ll = long long;
ll mod = 1e9+7;
const int N = 1005;

void solution(){
    int n, m, q; 
    cin>>n>>m>>q;
    vector<vector<ll>> p(N, vector<ll> (N, 0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>p[i][j];
            p[i][j] += p[i-1][j] + p[i][j-1] - p[i-1][j-1];
        }
    }

    for(int i=1;i<=q;i++){
        int x, y, l;
        cin>>x>>y>>l;
        ll ans=0;
        ans += p[x][y];
        for(int i=0;i<min(l, min(x, y));i++){
            ans -= p[x-i][y-i-1];
            ans += p[x-i-1][y-i-1];
        }
        ans -= p[x-l][y];
        ans = (ans%mod+mod)%mod;
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