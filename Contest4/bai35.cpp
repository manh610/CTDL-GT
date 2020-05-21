#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;

int n;
vector<ll> a;

void Input() {
    cin >> n;
    a.resize(n);
    for ( ll &i:a ) cin >> i;
}

void Solve() {
    ll ans = a[0];
    ll tmp = a[0];
    for ( int i = 1; i< n; i++) {
        tmp = max(a[i], tmp+a[i]);
        ans = max(ans, tmp);
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