#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> g;
vector<int> visited;
int num_nodes;

void dfs(int x, int col){
    visited[x]=col;
    num_nodes++;
    for(auto v : g[x]){
        if(!visited[v]){
            dfs(v, col);
        }
    }
}

void solution(){
    int n, m, q;
    cin>>n>>m>>q;
    g.resize(n+1);
    visited.resize(n+1);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    vector<int> comp_sizes;
    int col=1;
    for (int i = 1; i <= n; i++)
    {
        if(!visited[i]){
            num_nodes=0;
            dfs(i, col);
            comp_sizes.push_back(num_nodes);
            col++;
        }
    }
    while(q--){
        int p;
        cin>>p;
        if(p==1){
            int x;cin>>x;
            cout<<comp_sizes[visited[x]-1];
        }
        if(p==2){
            int x, y;
            cin>>x>>y;
            if(visited[x]==visited[y]){
                cout<<"YES";
            }else cout<<"NO";
        }
        cout<<endl;
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