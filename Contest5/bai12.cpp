#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;
const int mod = 1e9+7;

int k,n;

void Input() {
    cin >> n >> k;
}

void Solve() {
    if ( k>n ) {
        cout << 0;
        return;
    }
    ll res = 1;
    for ( int i = n-k+1; i <= n; i++) {
        res = (res*i)%mod;
    }
    cout << res << endl;
}

int main()
{
    IOS()
    int test; cin >> test;
    while ( test--) {
        Input();
        Solve();
    }
    return 0;
}

// Code by Manh.