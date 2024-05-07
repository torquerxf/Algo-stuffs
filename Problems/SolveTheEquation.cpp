#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll binpow(ll a, ll b, ll mod){
    ll ans=1;
    while(b){
        if(b%2==1){
            ans=(ans*a)%mod;
        }
        a=(a*a)%mod;
        b/=2;
    }
    return ans;
}

ll x(ll a, char op, ll b, ll p){
    ll ans;
    if(op=='+') ans = ((a%p)+(b%p))%p;
    else if(op=='-') ans = ((a%p)-(b%p))%p;
    else if(op=='*') ans = ((a%p)*(b%p))%p;
    else {
        ll inv = binpow(b,p-2,p);
        ans = ((a%p)*(inv%p))%p;
    }
    return ans;
}

void solution(){
    ll a, b, c, p;
    char op1, op2;
    char b1, b2;
    char m, o, d;
    cin>>b1>>a>>op1>>b>>op2>>c>>b2>>m>>o>>d>>p; 

    a%=p;
    b%=p;
    c%=p;
    ll ans;
    if(op1=='*'){
        ll x1 = x(a,op1,b,p);
        ans = x(x1,op2,c,p);
    }else if(op1=='/'){
        ll x1 = x(a,op1,b,p);
        ans = x(x1,op2,c,p);
    }else if(op1=='+' or op1=='-'){
        if(op2=='*' or op2=='/'){
            ll x1 = x(b,op2,c,p);
            ans = x(a,op1,x1,p);
        }else{
            ll x1 = (a,op1,b,p);
            ans = x(x1,op2,c,p);
        }
    }
    if(ans<0){
        cout<<(ans%p+p)%p;
    }
    else cout<<ans%p<<endl;

    // cout<<a<<op1<<b<<op2<<c<<" "<<p;
}

int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
    return 0;
}