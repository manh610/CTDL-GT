#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;
const int M = 1000000;

bool check[M+5];
int N;

void Sang() {
    for ( int i = 2; i <= M; i++ ) check[i] = true;
    for ( int i = 2; i*i <= M; i++) {
        if ( check[i] ) {
            for ( int j = i*i; j<=M; j+=i ) {
                check[j] = false;
            }
        }
    }
}

void Input() {
    cin >> N;
}

void Solve() {
    bool ok = false;
    for ( int i = 2; i <= N/2; i++) {
        if ( check[i] && check[N-i] ) {
            cout << i << " " << N-i << endl;
            ok = true;
            return;
        }
    }
    if ( !ok ) cout << -1 << endl;
}

int main()
{
    IOS()
    Sang();
    int test; cin >> test;
    while ( test--) {
        Input();
        Solve();
    }
    return 0;
}

// Code by Manh.