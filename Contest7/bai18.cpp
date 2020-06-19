#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;

string s;

void Input() {
    cin >> s;
}

int uu_tien(char c) {
    if ( c=='*' || c=='/') return 2;
    if ( c=='+' || c=='-') return 1;
    return 0;
}

void Solve() {
    stack<ll> sh;
    stack<char> st;
    int n = s.length();
    for ( int i = 0; i < n; i++) {
        if ( s[i]>='0' && s[i]<='9' ) sh.push(s[i]);
    }
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