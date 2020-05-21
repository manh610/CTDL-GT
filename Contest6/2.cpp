#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;

int n, x;
vector<int> a;

void Input() {
    cin >> n >> x;
    a.resize(n);
    for ( int i = 0; i < n; i++) cin >> a[i];
}

bool cmp(int i, int j) {
    return ( abs(i-x) < abs(j-x));
}

void Solve() {
    stable_sort(all(a),cmp);
    for ( int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
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