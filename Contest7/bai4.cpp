#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;

string s;

void Input() {
    cin >> s;
}

void Solve() {
    stack<char> q;
    int n = s.size();
    for ( int i = 0; i < n; i++) {
        if ( s[i]=='(' || s[i]=='[' || s[i]=='{' ) {
            q.push(s[i]);
        }
        else {
            if ( s[i]==')' ) {
                if ( q.empty() ) {
                    cout << "NO" << endl;
                    return;
                }
                else if ( q.top()=='(') q.pop();
                else {
                    cout << "NO" << endl;
                    return;
                }
            }
            else if ( s[i]==']' ) {
                if ( q.empty() ) {
                    cout << "NO" << endl;
                    return;
                }
                else if ( q.top()=='[') q.pop();
                else {
                    cout << "NO" << endl;
                    return;
                }
            }
            else {
                if ( q.empty() ) {
                    cout << "NO" << endl;
                    return;
                }
                else if ( q.top()=='{') q.pop();
                else {
                    cout << "NO" << endl;
                    return;
                }
            }
        }
    }
    if ( q.empty() ) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main()
{
    IOS()
    int test; cin >> test;
    cin.ignore();
    while ( test--) {
        Input();
        Solve();
    }
    return 0;
}

// Code by Manh.