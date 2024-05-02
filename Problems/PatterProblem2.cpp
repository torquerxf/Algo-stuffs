#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n, m, p;
        cin >> n >> m >> p;
        for (int i = 0; i < (p+1)*n+1; ++i) {
            for (int j = 0; j < (p+1)*m + 1; ++j) {
                if(i%(p+1) == 0 || j%(p+1) == 0) cout<<"*";
                else if((i+j)%((p+1)*2)==0) cout<<"/";
                else if((i-j)%((p+1)*2)==0) cout<<"\\";
                else cout<<".";
            }
            cout<<"\n";
        }
        cout<<"\n";
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}