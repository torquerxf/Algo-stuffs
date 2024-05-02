#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        char alpha='A';
        for (int j = 0; j <= i; j++)
        {
            cout<<alpha;
            alpha++;
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