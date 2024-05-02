#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<string> g;
vector<vector<int>> visited;

vector<int> dx={-1,0,1,0}; 
vector<int> dy={0,1,0,-1}; 

int check(int x, int y){
    if(x<0 || x>=n || y<0 || y>=m) return 0;
    return 1;
}

void dfs(int x, int y, int col)
{
    visited[x][y] = col;
    for(int i=0;i<4;i++){
        if(check(x+dx[i], y+dy[i]) && g[x+dx[i]][y+dy[i]]=='.'){
            if(!visited[x+dx[i]][y+dy[i]]){
                dfs(x+dx[i], y+dy[i], col);
            }
        }
    }
}

void solution()
{
    cin >> n >> m;
    g.resize(n + 1);
    visited.resize(n + 1, vector<int>(m + 1));

    for (int i = 0; i < n; i++){
        cin >> g[i];
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            visited[i][j] = 0;
        }
    }

    int col=1;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if(!visited[i][j] && g[i][j]=='.'){
                dfs(i, j, col);
                col++;
            }
        }
    }

    cout<<(col-1)<<endl;
}

int main()
{
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}