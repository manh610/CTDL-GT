#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long ll;
const int mod = 1e9+7;

ll a[10][10],n,k,b[10][10];

void Input() {
    cin >> n >> k;
    for ( int i = 0; i < n; i++ ) {
        for ( int j = 0; j < n; j++) {
            cin >> a[i][j];
            b[i][j] =  a[i][j];
        }
    }
}

void nhan(ll x[10][10], ll y[10][10]) {
    ll tmp[10][10];
    for ( int i = 0; i < n; i++) {
        for ( int j = 0; j < n; j++) {
            ll res = 0;
            for (int k = 0; k < n; k++) {
                res += (x[i][k]*y[k][j])%mod;
                res %= mod;
            }
            tmp[i][j] = res;
        }
    }
    for ( int i = 0; i < n; i++) {
        for ( int j = 0; j < n; i++) {
            a[i][j] = tmp[i][j];
        }
    }
}

void power(ll x[10][10],ll k) {
    if ( k<=1 ) return;
    power(x,k/2);
    nhan(x,x);
    if ( k%2==1 ) nhan(x,b);
}

void Solve() { 
    power(a,k);
    for ( int i = 0; i < n; i++) {
        for ( int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
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