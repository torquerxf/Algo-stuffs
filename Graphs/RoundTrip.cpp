#include <bits/stdc++.h>
using namespace std;

vector<vector<int>>g;
vector<int>visited;

//three colors 0, 1, 2
void dfs(int node, int start){
    visited[node]=1;
    for(auto v:g[node]){
        if(visited[v]==0){
            dfs(v,start);
        }
        if(visited[v]==1 && v==start){
            cout<<"YES"<<endl;
            return;
        }
    }
}

void solution(){
    int n, m;
    cin>>n>>m;
    g.resize(n+1);
    visited.resize(n+1);

    for(int i=0;i<n;i++){
        int a, b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    for (int i = 1; i <= n; i++){
        if(!visited[i]){
            dfs(i, i);
        }
    }
    cout<<"NO"<<endl;
    return;
}

int main(){
    int t=1;
    // cin>>t;
    while(t--){
        solution();
    }
    return 0;
}