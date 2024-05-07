#include <bits/stdc++.h>
using namespace std;

void solution(){
    int num, den; cin>>num>>den;
    string fra;
    
    if(num==0){
        cout<<'0'<<endl;
        return;
    }

    //checks if the fraction is negative
    if(num*den<0) fra.push_back('-');
    //makes numerator and denominator positive if they're negative
    num=abs(num);
    den=abs(den);
    if(num%den==0){
        cout<<fra<<num/den<<endl;
    }
}

int main(){
    int t=1;
    // cin>>t;
    while(t--){
        solution();
    }
    return 0;
}