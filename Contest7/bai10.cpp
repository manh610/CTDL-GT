#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;

string s1, s2;

void Input() {
    cin >> s1 >> s2;
}

string pha_ngoac(string s) {
    stack<int> st;
    for ( int i = 0; i < s.size(); i++) {
        if ( s[i]=='(') st.push(i);
        else if ( s[i]==')' ) {
            int left = st.top();
            st.pop();
            if ( left==0 ) continue;
            else {
                if ( s[left-1]=='+') continue;
                else if ( s[left-1]=='-') {
                    for ( int j = left; j<= i; j++) {
                        if ( s[j]=='+') s[j]='-';
                        else if ( s[j]=='-') s[j]='+';
                    }
                }
            }
        }
    }
    string ans = "";
    for ( int i = 0; i < s.size(); i++) {
        if ( s[i]!='(' && s[i]!=')') ans += s[i];
    }
    return ans;
}

void Solve() {
    string a,b;
    a = pha_ngoac(s1);
    b = pha_ngoac(s2);
    if ( a==b ) cout << "YES\n";
    else cout << "NO\n";
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