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
    sort(all(a));
    sort(all(b));
    int i = 0, j = 0;
    while ( i<n && j <m) {
        if ( a[i] < b[j] ) {
            cout << a[i] << " ";
            i++;
        }
        else if ( a[i] > b[j] ) {
            cout << b[j] << " ";
            j++;
        }
        else {
            cout << a[i] << " " << b[j] << " ";
            i++; j++;
        }
    }
    if ( i < n) {
        for ( int t = i; t < n; t++ ) cout << a[t] << " ";
    }
    if ( j < m) {
        for ( int t = j; t < m; t++ ) cout << b[t] << " ";
    }
    cout << endl;
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