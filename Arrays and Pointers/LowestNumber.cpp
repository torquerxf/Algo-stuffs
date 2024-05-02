#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n;cin>>n;
    int a[n];
    for(int &i : a){
        cin>>i;
    }
    
    int lowest=INT_MAX;
    int index=0;
    for(int i=0;i<n;i++){
        if(a[i]<lowest){
            lowest = a[i];
            index=i;
        }
    }
    cout<<lowest<<" "<<index+1<<"\n";
}

int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
    return 0;
}