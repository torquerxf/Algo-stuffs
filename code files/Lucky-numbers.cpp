#include <bits/stdc++.h>
using namespace std;

bool luck(int x){
    while(x!=0){
        if(x%10!=4 && x%10!=7){
            return 0;
        }
        x/=10;
    }
    return 1;
}

int main(){
    int a,b;
    cin>>a>>b;
    int f=0;
    for(int i=a;i<=b;i++){
        if(luck(i)){
            f++;
            cout<<i<<" ";
        }
    }
    if(f==0){
        cout<<-1<<endl;
    }
    return 0;
}