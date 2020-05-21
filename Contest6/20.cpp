#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;

ll n,k;
ll a[100005];

void Input() {
    cin >> n >> k;
    for ( int i = 1; i <= n; i++) cin >> a[i];
}

void Solve() {
    sort(a+1,a+n+1);
    ll res = 0;
    for ( ll i = 1; i < n; i++) {
        ll tmp = lower_bound(a+i,a+n+1,a[i]+k) - a - 1;
        res += tmp-i;
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