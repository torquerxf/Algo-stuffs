class Solution {
public:
    vector<vector<int>>g;
    vector<int>visited;

    void dfs(int x, int col){
        visited[x]=col;
        for(auto v: g[x]){
            if(!visited[v]){
                dfs(v, col);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        g.resize(n+1);
        visited.resize(n+1);

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j] && i!=j){
                    g[i+1].push_back(j+1);
                }
            }
        }

        int col=1;
        for(int i=1;i<=n;i++){
            if(!visited[i]){
            dfs(i,col);
            col++;
        }

        }   
        cout<<(col-1)<<endl;
    }
};