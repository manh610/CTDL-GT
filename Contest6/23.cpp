#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;

int n;
vector<int> a;

void Input() {
    cin >> n;
    a.resize(n-1);
    for ( int &i:a ) cin >> i;
}

void Solve() {
    ll sum = 0;
    for ( int i = 0; i < n-1; i++) 
        sum += a[i];
    cout << n*(n+1)/2 - sum << endl;
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