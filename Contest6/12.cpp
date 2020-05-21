#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;

int n,k;
vector<int> a;

void Input() {
    cin >> n >> k;
    a.resize(n);
    for ( int &i : a) cin >> i;
}

bool cmp(int a, int b) { return a>b; }

void Solve() {
    sort(all(a), cmp);
    for ( int i = 0; i < k; i++) cout << a[i] << " ";
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