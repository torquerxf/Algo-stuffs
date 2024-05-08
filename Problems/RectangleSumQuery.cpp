#include <bits/stdc++.h>
using namespace std;

using ll = long long;
ll mod = 1e9+7;
const int N = 1000100;

void solution(){
    int n, m, q;
    cin>>n>>m>>q;
    vector<vector<ll>>a(n+1, vector<ll>(m+1, 0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }

    vector<vector<ll>> p(n+1, vector<ll>(m+1, 0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            p[i][j] = a[i][j] + p[i-1][j] + p[i][j-1] - p[i-1][j-1];
        }
    }

    for(int i=1;i<=q;i++){
        int x1, y1, x2, y2;
        cin>>x1>>y1>>x2>>y2;
        ll ans = (p[x2][y2]-p[x2][y1-1]-p[x1-1][y2]+p[x1-1][y1-1]);
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