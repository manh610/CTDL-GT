#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;
const int mod = 1e9+7;

int n;
string s1,s2;
vector<string> str;

void Input() {
    cin >> n;
    cin.ignore();
    cin >> s1 >> s2;
    for ( int i = 0; i < n; i++) {
        string s;
        cin >> s;
        str.push_back(s);
    }
}

void Solve() {
    cout << s1 << " " << s2;
    for ( int i = 0; i < str.size(); i++) cout << str[i] << " ";    
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