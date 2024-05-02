#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n;cin>>n;
    int a[n];
    int fr[(int)1e5+1]={0};
    for(int &i : a){
        cin>>i;
        fr[i]++;
    }
    if(fr[*min_element(a,a+n)]&1){
        cout<<"Lucky"<<"\n";
    }else{
        cout<<"Unlucky"<<"\n";
    }

}

int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
    return 0;
}