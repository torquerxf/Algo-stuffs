#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n;cin>>n;
    int a[n];
    for(int &i : a) cin>>i;

    //using selection sort
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(a[i] > a[j]){
                swap(a[i], a[j]);
            }
        }
    }
    //printing
    for(int &i : a)
        cout<<i<<" ";
    cout<<endl;
}

int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
    return 0;
}