#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;

int n;
int a[200][200];

void Input() {
    cin >> n;
}

void Solve() {
    for ( int k = 1; k <= n; k++) {
        a[0][k] = 1;
        for ( int i = 1; i <= n; i++) {
            if ( k<=i) {
                a[i][k] = a[i][k-1] + a[i-k][k];
            }
            else{
                a[i][k] = a[i][k-1];
            }
        }
    }
    cout << a[n][n] << endl;
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