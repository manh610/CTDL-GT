#include <bits/stdc++.h>
using namespace std;
#define ONLINE_JUDGE "ONLINE_JUDGE"
#define setIO() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define all(x) (x).begin(),(x).end()
int powmod(int a,int b,int mod) {int res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
int gcd(int a,int b) {return b?gcd(b,a%b):a;}
int test = 1 , MULTI_TEST = 1; 

void Solve(){
    int n, mod=123456789;
    cin >> n;
    cout << powmod(2,n-1,mod) << endl;
}

main(){
    setIO();
    if(MULTI_TEST == 1) cin >> test;
    for(int i = 1 ; i <= test ; i++){Solve();}
    return 0;
}