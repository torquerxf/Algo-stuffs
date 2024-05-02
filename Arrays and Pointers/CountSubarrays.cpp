#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n;cin>>n;
    int a[n+1];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    a[n] = -1e6;

    /*vector<int> v;
    int count=0;
    for(int c=1;c<=n;c++){
        for(int i=0;i<n-c+1;i++){
            vector<int> v;
            for(int j=i;j<i+c;j++){
                v.push_back(a[j]);
            }
            if(is_sorted(v.begin(), v.end())){
                count++;
            }
        }
    }
    cout<<count<<"\n";
    */
   int l=0,r=1;
   int ans=0;
   while(r<n+1){
        if(a[r]<a[r-1]){
            ans += (r - l) * (r - l + 1) / 2;
            l = r;
        }
        r++;
   }
   cout << ans << "\n";
}

int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
    return 0;
}