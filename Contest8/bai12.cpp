#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;
const int mod = 1e9+7;

int n;
string s1,s2;
unordered_set<string> str;

void Input() {
    cin >> n;
    cin.ignore();
    cin >> s1 >> s2;
    for ( int i = 0; i < n; i++) {
        string s;
        cin >> s;
        str.insert(s);
    }
}

void Solve() {
    queue<pair<string,int>> q;
    q.push({s1,0});
    while ( !q.empty() ) {
        pair<string,int> x = q.front();
        q.pop();
        if ( x.first==s2 ) {
            cout << x.second+1 << endl;
            return;
        }
        for ( int i = 0; i < x.first.length(); i++) {
            for ( int j='A'; j <= 'Z'; j++) {
                string tmp = x.first;
                x.first[i] = j;
                if ( str.find(x.first)!=str.end() ) {
                    pair<string,int> y;
                    y.first = x.first;
                    y.second = x.second+1;
                    q.push(y);
                    str.erase(y.first);
                }
                x.first = tmp;
            }
        }
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