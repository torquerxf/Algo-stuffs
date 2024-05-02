#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n;
    cin>>n;
    int a[n],b[n-1],c[n-1];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n-1;i++) cin>>b[i];
    for(int i=0;i<n-2;i++) cin>>c[i];

    sort(a,a+n);
    sort(b,b+n-1);
    sort(c,c+n-2);
    int i=0;
    while(i<n){
        if(i==n-1){
            cout<<a[i]<<" ";
            break;
        }
        if(b[i]!=a[i]){
            cout<<a[i]<<" ";
            break;
        }
        
        i++;
    }
    i=0;
    while (i<n-1)
    {
        if(i==n-2){
            cout<<b[i]<<" ";
            break;
        }
        if(c[i]!=b[i]){
            cout<<b[i]<<"\n";
            break;
        }
        i++;
    }
    
}

int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
    return 0;
}