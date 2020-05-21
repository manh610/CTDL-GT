#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;

ll F[100];
ll n,k;

void Input() {
    cin >> n >> k;
}

char Fibo(ll n, ll k) {
    if ( n==1 ) return 'A';
    if ( n==2 ) return 'B';
    if ( k <= F[n-2] ) return Fibo(n-2,k);
    return Fibo(n-1, k-F[n-2]);
}

void Solve() {
    cout << Fibo(n,k) << endl;
}

int main()
{
    IOS()
    F[1] = F[2] = 1;
    for ( int i = 3; i < 93; i++)
        F[i] = F[i-1] + F[i-2];
    int test; cin >> test;
    while ( test-- ) {
        Input();
        Solve();
    }
    return 0;
}

// Code by Manh.