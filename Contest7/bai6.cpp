#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;

string s;

void Input() {
    getline(cin,s);
}

void Solve() {
    stack<char> st;
    bool check;
    for ( char ch : s) {
        if ( ch==')') {
            char top = st.top();
            st.pop();
            check = true;
            while ( top!='(' ) {
                if ( top=='+' || top=='-' || top=='*' || top=='/') check = false;
                top = st.top();
                st.pop();
            }
            if ( check ) {
                cout << "Yes\n";
                return; 
            }
        }
        else st.push(ch);
    }
    cout << "No\n";
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