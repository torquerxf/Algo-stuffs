#include <bits/stdc++.h>
using namespace std;

using ll = long long;
ll mod = 1e9+7;
const int N = 1000005;

void solution(){
    int n, k, q;
    cin>>n>>k>>q;
    ll p[N]={0};
    for(int i=1;i<=n;i++){
        int l, r;
        cin>>l>>r;
        p[l]+=1;
        p[r+1]-=1;
    }
    int is_good[n+1]={0};
    for(int i=1;i<=n;i++){
        p[i]=p[i-1]+p[i];
        if(p[i]>=k){
            is_good[i]=1;
        }
    }
    int prefixSum[N];
    prefixSum[0] = 0;
    for (int i = 1; i < N; i++) {
        prefixSum[i] = prefixSum[i - 1] + is_good[i];
    }
    while(q--){
        int l, r;
        cin>>l>>r;
        int count = prefixSum[r] - prefixSum[l - 1];
        cout<<count<<endl;
    }
}

int main(){
    int t=1;
    // cin>>t;
    while(t--){
        solution();
    }
    return 0;
}