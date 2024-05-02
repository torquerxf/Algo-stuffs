#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int max=-1;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(max<=x){
            max=x;
        }
    }
    cout<<max<<endl;
    return 0;
}