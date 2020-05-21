#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;

int n;
vector<ll> a;

void Input() {
    cin >> n;
    a.resize(n);
    for ( ll &i : a) cin >> i;
}

void Solve() {
    stable_sort(all(a));
    for ( ll i : a) cout << i << " ";    
}

int main()
{
    IOS()
    int test = 1;
    while ( test--) {
        Input();
        Solve();
    }
    return 0;
}

// Code by Manh.