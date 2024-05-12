#include <bits/stdc++.h>
using namespace std;

using ll = long long;
ll mod = 1e9+7;
const int N = 1000100;

int n, q, a[100100], k;

int check(int mid){
    if(mid == n-1) return 1;
    if(a[mid] > a[mid+1]){
        return 1;
    }
    return 0;
}

void solution(){
    cin>>n>>q;
    for(int i=0;i<n;i++) cin>>a[i];

    int lo = 0, hi=n-1, peak=0;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(check(mid)==1){
            peak = mid;
            hi = mid-1;
        }else{
            lo = mid+1;
        }
    }
    while(q--){
        cin>>k;
        lo=0, hi=peak-1;
        vector<int> ans;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(a[mid]==k){
                ans.push_back(mid+1);
                break;
            }else if(a[mid] > k){
                hi = mid -1;
            }else{
                lo = mid+1;
            }
        }
        lo = peak, hi=n-1;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(a[mid] == k){
                ans.push_back(mid+1);
                break;
            }else if(a[mid] > k){
                lo= mid+1;
            }else{
                hi = mid -1;
            }
        }
        for(auto i: ans) cout<<i<<" ";
        cout<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}