#include <bits/stdc++.h>
using namespace std;

void solution(){
    double x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;

    double Euclidean = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    double Manhattan = abs(x2-x1) + abs(y2-y1);

    cout<<fixed<<setprecision(7)<<Euclidean<<" "<<Manhattan<<endl;
}

int main(){
    long long t;cin>>t;
    while(t--){
        solution();
    }
    return 0;
}