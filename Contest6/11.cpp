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
    for ( int &i : a ) cin >> i;
}

void Solve() {
    int ans = INT_MAX;
    for ( int i = 0; i < n; i++) {
        for ( int j = i+1; j < n; j++) {
            int sum = a[i] + a[j];
            if ( abs(sum) < abs(ans) ) 
                ans = sum;
        }
    }
    cout << ans << endl;
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