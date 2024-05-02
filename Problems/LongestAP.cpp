#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int max_length=1;
    int length = 1;
    int d=a[1]-a[0]; // initial common diff
    //iterating through the entire array
    for(int i=1;i<n;i++){
        if(a[i]-a[i-1] == d){
            length++;
            max_length = max(length, max_length);
        }else{
            length = 2;
            d = a[i] - a[i-1];
        }
    }
    cout<<max_length<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}