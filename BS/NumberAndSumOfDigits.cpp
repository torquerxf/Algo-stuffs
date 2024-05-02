#include <bits/stdc++.h>
using namespace std;
#define int long long

int n, s;
int check(int mid){
    int sum=0;
    int temp=mid;
    while(temp){
        sum+=temp%10;
        temp/=10;
    }
    if(mid-sum >= s){
        return 1;
    }
    return 0;
}

void solution(){
    cin>>n>>s;

    int lo=1, hi=n, ans=0;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(check(mid)==1){
            ans=mid;
            hi=mid-1;
        }else{
            lo=mid+1;
        }
    }
    (ans)   ?cout<<(n-(ans-1))<<endl
            :cout<<ans<<endl;    
}

signed main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;cin>>t;
    while(t--){
        solution();
    }
    return 0;
}