#include <bits/stdc++.h>
using namespace std;

int check(int t, int a[], int n){
    if (t==n-1) return 1;
    if(a[t]>a[t+1]){
        return 1;
    }else{
        return 0;
    }
}

int check2(int t, int a[], int n, int k){
    if(a[t]==k){
        return 1;
    }
    else return 0;
}

void solution(){
    int n,q; cin>>n>>q;
    int a[100100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int lo=0, hi=n-1, ans=0;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(check(mid, a, n)==1){
            ans=mid;
            hi=mid-1;
        }else{
            lo=mid+1;
        }
    }

    for (int i = 0; i < q; i++)
    {
        int k;
        cin>>k;
        int l=0,h=ans,in=-1;
        while(l<=h){
            int mid = l + (h-l)/2;
            if(check2(mid, a, n, k)==1){
                in=mid;
                h=mid-1;
            }else{
                l=mid+1;
            }
        }
        if(in != -1) cout<<(in+1)<<" ";
        l=ans, h=n-1, in=-1;
        while(l<=h){
            int mid = l + (h-l)/2;
            if(check2(mid, a, n, k)==1){
                in=mid;
                h=mid-1;
            }else{
                l=mid+1;
            }
        }
        if(in != -1) cout<<(in+1);
        cout<<"\n";
    }
    
}

int main(){
	int t;
    cin>>t;
    while(t--){
        solution();
    }
}