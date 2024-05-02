#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n;cin>>n;
    int a[n];
    for(int &i : a){
        cin>>i;
    }
    //start
    vector<int> v;
    for (int c = 1; c <= n; c++)
        {
            for (int i = 0; i < n - c + 1; i++)
            {
                int m = a[i];
                for (int j = i; j < i + c; j++)
                {
                    m = max(m, a[j]);
                }
                v.push_back(m);
            }
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << "\n";
}


int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
    return 0;
}