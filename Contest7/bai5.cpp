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
    int res = 0;
    stack<int> st;
    st.push(-1);
    int n = s.length();
    for ( int i = 0; i < n; i++) {
        if ( s[i]=='(' ) st.push(i);
        else {
            st.pop();
            if ( !st.empty() ) {
                res = max (res, i-st.top());
            }
            else st.push(i);
        }
    }
    cout << res << endl;
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