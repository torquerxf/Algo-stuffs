#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n;
    string m;
    cin>>n>>m;
    size_t dotPos = m.find('.');
    int z = stoi(m.substr(dotPos+1));
    string y = m.substr(0,dotPos);

    string ans = to_string(z+n) + '.' + to_string(stoi(y)+n);
    cout<<ans<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}