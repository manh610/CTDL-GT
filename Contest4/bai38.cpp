#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;

vector<int> a;
int m,n,k;

void Input() {
    cin >> m >> n >> k;
    a.resize(m+n);
    for ( int &i:a) cin >> i;
}

void Solve() {
    sort(all(a));
    cout << a[k-1] << endl;
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