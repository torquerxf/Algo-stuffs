#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solution(){
    ll n;cin>>n;
    vector<ll>ans;
    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
            ans.push_back(i);
            if(i*i != n){
                ans.push_back(n/i);
            }
        }
    }
    cout<<ans.size()<<endl;
}

int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
    return 0;
}