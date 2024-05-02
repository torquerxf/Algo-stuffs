#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n;cin>>n;
    int a[n];
    for(int &i : a) cin>>i;

    for (int i = 0; i < n; i++)
    {
        if(a[i]<=10){
            cout<<"A["<<i<<"] = "<<a[i]<<endl;
        }
    }
    
}

int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
    return 0;
}