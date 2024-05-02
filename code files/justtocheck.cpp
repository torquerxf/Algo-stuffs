#include <bits/stdc++.h>
using namespace std;
int main()
{
    int temp = 999;
    int sum=0;
    while(temp){
        sum+=temp%10;
        temp/=10;
    }
    cout<<sum;
    return 0;
}
