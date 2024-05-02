#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solution(){
    ll n;cin>>n;
    
    // O(sqrt(n)) algo
    bool is_prime = true;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            is_prime = false;
        }
    }
    if(n == 1 || is_prime == false){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
}

int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
    return 0;
}