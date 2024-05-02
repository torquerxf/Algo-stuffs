#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n;cin>>n;
    int temp=n/365;
    cout<<temp<<" years\n";
    temp=n-temp*365;
    int temp1=temp/30;
    cout<<temp1<<" months\n";
    temp=temp-temp1*30;
    cout<<temp<<" days\n";
}

int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
    return 0;
}