#include <bits/stdc++.h>
using namespace std;

void solution(){
    int mid, final, make;
    cin>>mid>>final>>make;
    if(mid==-1 or final==-1){
        cout<<'F';
    }else if(mid+final >= 80){
        cout<<'A';
    }else if(mid+final<80 and mid+final>=65){
        cout<<'B';
    }else if(mid+final<65 and mid+final>=50){
        cout<<'C';
    }else if(mid+final<50 and mid+final>=30){
        if(make>=50){
            cout<<'C';
        }else{
            cout<<'D';
        }
    }else{
        cout<<'F';
    }cout<<"\n";
}
int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
    return 0;
}