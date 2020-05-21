#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;

int n;
vector<int> a;

void Input() {
    cin >> n;
    a.resize(n);
    for ( int i = 0; i < n; i++) cin >> a[i];
}

void Solve() {
    int l = 0,r = 0;
    int Min = a[n-1], Max = a[0];
    for ( int i = n-2 ; i >= 0; i-- ) {
        if ( a[i] < Min ) {
            Min = a[i];
        }
        if ( a[i] > Min ) {
            l = i;
        }
    }
    for ( int i = 1 ; i < n ; i++ ) {
        if ( a[i] > Max ) {
            Max = a[i];
        }
        if ( a[i] < Max ) {
            r = i;
        }
    }
    cout << l+1 << " " << r+1 << endl;
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