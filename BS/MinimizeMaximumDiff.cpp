#include <bits/stdc++.h>
using namespace std;
#define int long long

int n, k;
int a[100100];

int check(int mid){
    int points=0;
    for(int i=1;i<n;i++){
        points+=(a[i]-a[i-1]-1)/mid;
    }
    return points<=k;
}

void solution(){
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int lo=1, hi=1e9, ans=hi;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(check(mid)){
            ans=mid;
            hi=mid-1;
        }else{
            lo=mid+1;
        }
    }
    cout<<ans<<"\n";
}

signed main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;cin>>t;
    while(t--){
        solution();
    }
    return 0;
}