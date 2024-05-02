#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    int special=0; //especial case cuando a y b son cero
    // for c=0, d=-b/a
    vector<float> d;
    for (int i = 0; i < n; i++)
    {
        if(b[i] == 0 || a[i] == 0){
            if(a[i] == 0 && b[i] ==0){
                special++;
                continue;
            }
        }
        else d.push_back(-(float)b[i] / a[i]);
    }

    sort(d.begin(),d.end());
    int max_count = 1, res = d[0], curr_count = 1; 
    for (int i = 1; i < n; i++) { 
        if (d[i] == d[i - 1]) 
            curr_count++; 
        else
            curr_count = 1; 
        
        if (curr_count > max_count) { 
            max_count = curr_count; 
            res = d[i - 1]; 
        } 
    }  

    cout<<max_count+special<<endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}