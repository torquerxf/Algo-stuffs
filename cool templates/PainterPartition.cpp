#include <bits/stdc++.h>
using namespace std;

int n,k;
int arr[100100];

int check(int t){
    int painter_spawned = 0;
    int time_left = 0;
    for(int i=0;i<n;i++){
        if(time_left >= arr[i]){
            time_left -= arr[i];
        }else{
            painter_spawned++;
            if(painter_spawned>k){
                return 0;
            }
            time_left = t;
            if(time_left>=arr[i]){
                time_left -= arr[i];
            }else{
                return 0;
            }
        }
    }
    return 1;
}


int main()
{
    cin>>n>>k;
    int sum = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum += arr[i];
    }
    int lo = 0, hi= sum, ans = -1;
    while(lo<=hi){
        int mid = (lo+hi)/2;
        if(check(mid)==1){
            ans = mid;
            hi = mid-1;
        }else{
            lo = mid+1;
        }
    }
    cout<<ans<<endl;
}