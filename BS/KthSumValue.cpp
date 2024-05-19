#include <bits/stdc++.h>
using namespace std;

using ll = long long;
ll mod = 1e9+7;
const int N = 1000100;

ll n, m, k;
vector<ll>a, b;

int check(ll x){
    ll count =0;
    for(int i=0;i<n;i++){
        count += upper_bound(b.begin(), b.end(), x-a[i]) - b.begin();
    }
    return count>=k;
}

void solution(){
    cin>>n>>m>>k;
    a.resize(n);
    b.resize(m);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];

    if(n>m){
        swap(n, m);
        swap(a, b);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll lo = a[0]+b[0], hi=a.back()+b.back(), ans=-1;
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
    int t; cin>>t; while(t--)
        solution();
    return 0;
}