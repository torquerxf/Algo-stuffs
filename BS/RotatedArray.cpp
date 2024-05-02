#include <bits/stdc++.h>
using namespace std;

int check(int t, int a[], int n){
    if(a[t]<a[0]){
        return 1;
    }else{
        return 0;
    }
}

void solution(){
    int n; cin>>n;
    int a[100100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int lo=0, hi=n-1, ans=0;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(check(mid, a, n)==1){
            ans=mid;
            hi=mid-1;
        }else{
            lo=mid+1;
        }
    }
    cout<<ans<<"\n";
}

int main(){
	int t;
    cin>>t;
    while(t--){
        solution();
    }
}