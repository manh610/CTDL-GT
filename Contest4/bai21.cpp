#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;
const ll mod = 1e9+7;

ll n,k;

void Input() {
    cin >> n >> k;
}

ll powermod(ll a, ll b) {
    if ( b==0 ) return 1;
    if ( b==1 ) return a;
    ll tmp = powermod(a,b/2);
    tmp = tmp*tmp%mod;
    if ( b%2 ) return tmp*a%mod;
    return tmp;
}

void Solve() {
    cout << powermod(n,k) << endl;
}

int main()
{
    IOS()
    int test; cin >> test;
    while ( test-- ) {
        Input();
        Solve();
    }
    return 0;
}

// Code by Manh.