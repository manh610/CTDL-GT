#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;

string s;

void Input() {
    cin >> s;
}

bool isToanTu(char c) {
    if ( c=='+' || c=='-' || c=='*' || c=='/' || c=='^') return true;
    return false;
}

void Solve() {
    stack<string> st;
    int n = s.length();
    for ( int i = 0; i < n; i++) {
        if ( isToanTu(s[i]) ) {
            string fi = st.top(); st.pop();
            string se = st.top(); st.pop();
            string tmp = s[i] + se + fi;
            st.push(tmp);
        }
        else st.push(string(1,s[i]));
    }
    cout << st.top() << '\n';
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