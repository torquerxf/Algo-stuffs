#include <bits/stdc++.h>
using namespace std;

/*
5 4
1 2  
2 3 
3 5 
5 2
*/
vector<vector<int>> g;

vector<int> visited;
int num_node;
void dfs(int node,int col){
    visited[node]=col;
    num_node++;
    for(auto v:g[node]){ 
        if(!visited[v]){ 
            dfs(v, col);
        }
    }
}

void solve(){
    int n,m;
    cin>>n>>m;
    g.resize(n+1);
    visited.resize(n+1);
    for(int i=0;i<m;i++){
       int a,b;
       cin>>a>>b;
       g[a].push_back(b);
       // if undirected.
       g[b].push_back(a);
    }
    
    // col = color
    vector<int> comp_sizes;
    int col = 1; 
    for(int i=1;i<=n;i++){
        if(!visited[i]){ 
            num_node = 0;
           dfs(i,col);
           comp_sizes.push_back(num_node);
           col++;
        }
    }
    for(int i=1;i<=n;i++){
        cout<<visited[i]<<" ";
    }
    cout<<endl;
    // int q;
    // cin>>q;
    // while(q--){
    //     int a,b;
    //     cin>>a>>b;
    //     if(visited[a]==visited[b]){
    //         cout<<"Same component\n";
    //     }else{
    //         cout<<"Different component\n";
    //     }
    // }
    
    for(auto v:comp_sizes){
        cout<<v<<" ";
    }
    
    int ans = 0;
    int sum = 0;
    for(int i=0;i<comp_sizes.size();i++){
        ans += sum * comp_sizes[i];
        sum += comp_sizes[i];
    }
    cout<<ans<<endl;
}

int main()
{
    solve();
    return 0;
}