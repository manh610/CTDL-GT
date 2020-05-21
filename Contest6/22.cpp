#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;

int n,x;
vector<int> a;

void Input() {
    cin >> n >> x;
    a.resize(n);
    for ( int &i : a) cin >> i;
}

void Solve() {
    int l = 0, r = n-1;
    while ( l<=r ) {
        int mid = l + (r-l)/2;
        if ( a[mid]==x ) {
            cout << 1 << endl;
            return;
        }
        if ( a[mid] < x ) {
            l = mid + 1;
        }
        else r = mid-1;
    }
    cout << -1 << endl;
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