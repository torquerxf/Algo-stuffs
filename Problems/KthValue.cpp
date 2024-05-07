#include <bits/stdc++.h>
using namespace std;

using ll = long long;
ll mod = 1e9+7;
const int N = 1000100;

void solution(){
    ll n, m, q;
    cin>>n>>m>>q;
    vector<ll>a(n+1);
    vector<ll>p(n+2);
    
    vector<pair<ll,ll>> s; // contains freq 
    for(ll i=1;i<=n;i++){
        cin>>a[i];
    }
    for(ll i=1;i<=m;i++){
        ll l, r;
        cin>>l>>r;
        // partial sums to store the freq
        p[l] +=1;
        p[r+1] -=1;
    }
    //partial sums
    for(ll i=1;i<=n;i++){
        p[i] +=p[i-1];
        s.push_back({a[i], p[i]});
    }
    sort(s.begin(), s.end());
    vector<ll>pf(n); // prefix sum for freq
    pf[0] = s[0].second;
    for(int i=1;i<n;i++){
        pf[i] = pf[i-1] + s[i].second;
    }
    ll x; // to store the iterator
    for(ll i=1;i<=q;i++){
        ll k;
        cin>>k;
        if(lower_bound(pf.begin(), pf.end(), k) != pf.end()){
            x = lower_bound(pf.begin(), pf.end(), k) - pf.begin();
            cout<<s[x].first<<" ";
        }else{
            cout<<"-1";
        }
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}