#include <bits/stdc++.h>
using namespace std;

using ll = long long;
ll mod = 1e9+7;
const int N = 1000100;

void solution(){
    int n, k;cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //DS for two pointers condition checking 
    int cntzero=0;
    // pointers
    int head = -1, tail =0;
    int ans=0;
    while(tail<n){
        // while there is next element to take and we will not violate any condition
        while(head+1<n && ((arr[head+1]==1 && cntzero<=k) || (arr[head+1]==0 && cntzero<k))){ // <--condition here change
            head++;
            //change
            if(arr[head]==0) cntzero++;
        }
        //update the answer accordingly
        cout<<tail<<" "<<head<<endl; // to debug
        ans = max(ans, head-tail+1);
        // move tail ahead and remove last element contribution
        if(head>=tail){
            //change
            if(arr[tail]==0) cntzero--;
            tail++;
        }else{
            tail++;
        }
    }
    cout<<ans<<endl;
}

int main(){
    // int t; cin>>t; while(t--)
        solution();
    return 0;
}