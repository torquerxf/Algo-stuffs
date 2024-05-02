#include <bits/stdc++.h>
using namespace std;

void solution(){
    float x, y;cin>>x>>y;
    if(x==0 and y==0) cout<<"Origem"<<"\n";
    else if(x==0) cout<<"Eixo Y"<<"\n";
    else if(y==0) cout<<"Eixo X"<<"\n";
    else{
        if(x>0 and y>0) cout<<"Q1"<<"\n";
        else if(x<0 and y>0) cout<<"Q2"<<"\n";
        else if(x<0 and y<0) cout<<"Q3"<<"\n";
        else if(x>0 and y<0) cout<<"Q4"<<"\n";
    }
}

int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
    return 0;
}