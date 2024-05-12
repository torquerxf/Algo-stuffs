#include <bits/stdc++.h>
using namespace std;

using ll = long long;
ll mod = 1e9+7;
const int N = 1000100;

int n;
int a[100100];

int check(int mid){
    if(a[mid] <= a[n-1]){
        return 1;
    }
    return 0;
}

void solution(){
    cin>>n;
    for(int i=0;i<n;i++) cin>> a[i];

    int lo = 0, hi=n-1, ans=-1;
    while(lo<=hi){
        int mid = (lo+hi)/2; // lo+(hi-lo)/2;
        if(check(mid)==1){
            ans = mid;
            hi = mid-1;
        }else{
            lo = mid+1;
        }
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}