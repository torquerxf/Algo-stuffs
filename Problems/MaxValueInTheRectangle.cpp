#include <bits/stdc++.h>
using namespace std;

using ll = long long;
ll mod = 1e9+7;
const int N = 1010;

void solution(){
    int n, m, q;
    cin>>n>>m>>q;
    vector<vector<ll>>p(N, vector<ll> (N, 0)); // partial sum

    while(q--){
        int x1, y1, x2, y2, c;
        cin>>x1>>y1>>x2>>y2>>c;
        p[x1][y1] += c;
        p[x1][y2+1] -=c;
        p[x2+1][y1] -=c;
        p[x2+1][y2+1] +=c;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            p[i][j] += p[i-1][j] + p[i][j-1] - p[i-1][j-1];
        }
    }
    ll max = p[1][1];
    ll count=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(max < p[i][j]){
                max = p[i][j];
                count = 1;
            }
            else if(max==p[i][j]) count++;
        }
    }
    cout<<max<<" "<<count<<endl;
}

int main(){
    int t=1;
    // cin>>t;
    while(t--){
        solution();
    }
    return 0;
}