#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;

int n,s,m;

void Input() {
    cin >> n >> s >> m;
}

void Solve() {
    if ( n*(s-s/7) < s*m ) cout << -1 << endl;
    else {
        for ( int i = 1; i <= s-s/7; i++) {
            if ( n*i >= s*m ) {
                cout << i << endl;
                return;
            }
        }
    }
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