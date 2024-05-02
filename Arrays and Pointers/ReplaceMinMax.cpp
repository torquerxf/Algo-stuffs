#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n;
    cin>>n;
    int a[n];
    int max=INT_MIN;
    int min=INT_MAX;
    int maxi, mini;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>max){
            max=a[i];
            maxi=i;
        }
        if(a[i]<min){
            min=a[i];
            mini=i;
        }
    }
    swap(a[maxi], a[mini]);
    for(int &i : a){
        cout<<i<<" ";
    }cout<<endl;
}

int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
    return 0;
}