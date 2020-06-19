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
    if ( c=='^' ) return 3;
    if ( c=='+' || c=='-' ) return 1;
    if ( c=='*' || c=='/' ) return 2;
    return 0;
}

void Solve() {
    string res = "";
    stack<char> st;
    int n = s.length();
    for ( int i = 0; i < n; i++) {
        if ( s[i]>='A' && s[i]<='Z' ) res += s[i];
        else if ( s[i]>='a' && s[i]<='z' ) res += s[i];
        else if ( s[i]=='(') st.push(s[i]);
        else if ( s[i]==')') {
            while ( st.top()!='(' && st.size() ) {
                res += st.top();
                st.pop();
            }
            st.pop();
        }
        else if ( s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='^') {
            int tmp = uu_tien(s[i]);
            while ( st.size() && uu_tien(st.top())>=tmp ) {
                res += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while ( st.size() ) {
        if ( st.top()!='(') res += st.top();
        st.pop();
    }
    cout << res << '\n';
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