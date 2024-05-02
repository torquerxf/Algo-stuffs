#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n,b;cin>>n>>b;
    vector<int>a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    sort(a.begin(), a.end());
    int max_num=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]<=b){
            max_num++;
            b-=a[i];
        }
    }
    cout<<max_num<<endl;
}

int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
    return 0;
}