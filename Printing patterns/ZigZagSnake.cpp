#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int n, m;
    cin >> n >> m;
    bool toggle = true;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i % 2 == 1)
            {
                cout << "#";
            }
            else
            {
                if (toggle==true)
                {
                    if (j == m)
                    {
                        cout << "#";
                    }
                    else
                        cout << ".";
                }
                if (toggle==false)
                {
                    if (j == 1)
                    {
                        cout << "#";
                    }
                    else
                        cout << ".";
                }
            }
        }
        if(i%2==0)toggle=!toggle;
        cout << endl;
    }
}

int main()
{
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}