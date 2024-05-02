#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = n-i-1; j > 0; j--)
        {
           cout<<"  ";
        }
        for (int j = 0; j < 2*i+1; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
}

int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
    return 0;
}