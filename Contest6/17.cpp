#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;

int n,m;
vector<ll> a,b;

void Input() {
    cin >> n >> m;
    a.resize(n);
    b.resize(m);
    for ( ll &i : a) cin >> i;
    for ( ll &i : b) cin >> i;
}

void Solve() {
    ll Max = a[0], Min = b[0];
    for ( int i = 1; i < n; i++) {
        if ( a[i]>Max ) Max = a[i];
    }
    for ( int i = 1; i < m; i++) {
        if ( b[i]<Min ) Min = b[i];
    }
    cout << Max*Min << endl;
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