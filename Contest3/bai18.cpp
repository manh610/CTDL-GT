#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;

int n;

void Input() {
    cin >> n;
}

void Solve() {
    int d4 = 0, d7 = 0;
    int res4 = 1e5, res7 = 1e5;
    for ( int i = n; i >= 0; i--) {
        if ( n>=4*i && (n-4*i)%7==0 ) {
            d4 = i;
            d7 = (n-4*i)/7;
            if ( res4+res7 > d4+d7) {
                res4 = d4; res7 = d7;
            }
            else if ( res4+res7==d4+d7 && res4>d4 ) {
                res4=d4; res7=d7;
            }
        } 
    }
    if ( 4*res4+7*res7 == n) {
        for ( int i = 0; i < res4; i++) cout << 4;
        for ( int i = 0; i < res7; i++) cout << 7;
    }
    else cout << -1;
    cout << endl;
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