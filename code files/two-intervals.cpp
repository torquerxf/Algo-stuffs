#include <bits/stdc++.h>
using namespace std;

void sol(){
    int l1,r1,l2,r2;cin>>l1>>r1>>l2>>r2;
    if(l2>r1 or r2<l1){
        cout<<-1<<endl;
        return;
    }
    if(r1>l2 or l1>r2){
        cout<<-1<<endl;
        return;
    }
    cout<<max(l1,l2)<<" "<<min(r1,r2)<<endl;
    
    return;
}
int main(){
    sol();
    return 0;
}