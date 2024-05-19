#include <bits/stdc++.h>
using namespace std;

using ll = long long;
ll mod = 1e9+7;
const int N = 1000100;

int n, k;
int a[100100];

int check(int t){
    int n_zeroes = 0;
    for(int i=0;i<t;i++){
        if(a[i]==0){
            n_zeroes++;
        }
    }
    if(n_zeroes<=k) return 1;
    for(int i=t;i<n;i++){
        if(a[i-t]==0){
            n_zeroes--;
        }
        if(a[i]==0){
            n_zeroes++;
        }
        if(n_zeroes<=k){
            return 1;
        }
    }
    return 0;
}

void solution(){
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int lo = 0, hi=n, ans=0;
    while(lo<=hi){
        int mid = (lo+hi)/2; // lo+(hi-lo)/2;
        if(check(mid)==1){
            ans = mid;
            lo = mid+1;
        }else{
            hi = mid-1;
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