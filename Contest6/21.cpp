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
    for ( int &i : a) cin >> i;
}

bool cmp(const pair<int,int> &a, const pair<int,int> &b) {
    if ( a.second == b.second ) 
        return a.first < b.first;
    return a.second > b.second;
}

void Solve() {
    sort(all(a));
    int dem = 1, j = 0;
    vector<pair<int,int>> b(n);
    for ( int i = 1; i < n; i++) {
        if ( a[i]==a[i-1] ) dem++; 
        else {
            b[j].first = a[i-1];
            b[j].second = dem;
            j++;
            dem = 1;
        }
    }
    b[j].first = a[n-1];
    b[j].second = dem;
    sort(all(b),cmp);
    for ( int i = 0; i <= j; i++) {
        while ( b[i].second-- ) {
            cout << b[i].first << " ";
        }
    }
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