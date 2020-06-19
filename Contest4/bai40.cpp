#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;

void Solve() {
    int n, res = 0;
    cin >> n;
    for ( int i = 0; i < n; i++) {
        int x; cin >> x;
        res += (x==0);
    }
    cout << res << '\n';
}
int main()
{
    IOS()
    int test; cin >> test;
    while ( test--) {
        Solve();
    }
    return 0;
}

// Code by Manh.