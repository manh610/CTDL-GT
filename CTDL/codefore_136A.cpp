#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;

int n, a[105], b[105];

void Input() {
    cin >> n;
    for ( int i = 1; i <= n; i++)   {
        cin >> a[i];
        b[a[i]] = i;
    }
}

void Solve() {
    for ( int i = 1; i <= n; i++) cout << b[i] << " ";
}

int main()
{
    IOS()
    // int test; cin >> test;
    int test = 1;
    while ( test--) {
        Input();
        Solve();
    }
    return 0;
}

// Code by Manh.