#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll n,a,ans,tg[4];
const ll p=998244353;
void mp2(long long x[],long long y[],long long z[])
{
    tg[0]=(x[0]*y[0]+x[1]*y[2])%p;
    tg[1]=(x[0]*y[1]+x[1]*y[3])%p;
    tg[2]=(x[2]*y[0]+x[3]*y[2])%p;
    tg[3]=(x[2]*y[1]+x[3]*y[3])%p;
    z[0]=tg[0];
    z[1]=tg[1];
    z[2]=tg[2];
    z[3]=tg[3];
}
long long fib(long long x){
    long long t[4]= {0,1,1,1},r[4]= {0,1,1,1};
    while(x)
    {
        if(x&1)
            mp2(r,t,r);
        mp2(t,t,t);
        x>>=1;
    }
    return r[2]%p;
}
int main()
{
    cin>>n;
    ans=(fib(n)*fib(n-1))%p;
    cout<<ans;
}

// Code by Manh.