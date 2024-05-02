#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n;
    cin >> n;
    int r, c;
    cin >> r >> c;
    int x, y;
    cin >> x >> y;
    x--;y--;
    string instructions;
    cin >> instructions;
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            a[i][j]=0;
        }
    }
    a[x][y]=1;
    int i=x,j=y;
    for (int k = 0; k < n; k++)
    {
        if(instructions[k]=='N'){
            while(i>0 && a[i][j]==1){
                i--;
            }
        }
        else if(instructions[k]=='S'){
            while(i<r && a[i][j]==1){
                i++;
            }
        }
        else if(instructions[k]=='E'){
            while (j<c && a[i][j]==1){
                j++;
            } 
        }
        else if(instructions[k]=='W'){
            while(j>0 && a[i][j]==1){
                j--;
            }
        }
        a[i][j]=1;
    }
    cout<<(i+1)<<" "<<(j+1)<<"\n";
}

int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
    return 0;
}