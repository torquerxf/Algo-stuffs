#include <bits/stdc++.h>
using namespace std;

using ll = long long;
ll mod = 1e9+7;
const int N = 1000100;

ll n, k, a[100100];

int check(int t){
    ll sum =0;
    for(int i=1;i<n;i++){
        sum += (a[i]-a[i-1]+t-1)/t-1;
    }
    if(sum <= k){
        return 1;
    }
    return 0;
}

void solution(){
    cin>>n>>k;
    for(int i=0;i<n;i++){ 
        cin>>a[i];
    }

    // bs on ans
    ll lo = 1, hi = a[n-1] - a[0], ans=hi;
    while(lo<=hi){
        ll mid = lo+(hi-lo)/2;
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