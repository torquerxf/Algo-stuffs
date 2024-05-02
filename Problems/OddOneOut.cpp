#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n;cin>>n;
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++){
        int ele;cin>>ele;
        mpp[ele]++;
    }
    for (auto i = mpp.begin(); i != mpp.end(); i++)
    {
        if(i->second&1){
            cout<<i->first<<endl;
            break;
        }
    }  
}

int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
    return 0;
}