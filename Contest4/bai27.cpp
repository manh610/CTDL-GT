#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;

ll n,l,r;
vector<ll> a;

void Input() {
    cin >> n >> l >>  r;
    a.clear();
}

void center(ll n) {
    ll tmp = 1;
    while ( (n/2)>0  ) {
        tmp *= 2;
        a.push_back(tmp);
        n/=2;
    }
}

ll val(ll k, ll n, ll pos) {
    if ( k%2 ) return 1;
    if ( k < a[pos] ) val(k,n/2,pos-1);
    else if ( k==a[pos]) return n%2;
    else if ( k>a[pos]) val(2*a[pos]-k,n/2,pos-1);
}

void Solve() {
    center(n);
    ll ans= 0;
    for ( ll i = l; i<=r; i++) {
        ans += val(i,n,a.size()-1);
    }
    cout << ans << endl;
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
