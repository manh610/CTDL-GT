#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;

int k;
string s;

void Input() {
    cin >> k >> s;
}

void Solve() {
    int d[300] = {0};
    for ( int i = 0; i < s.size(); i++) d[s[i]]++;
    priority_queue<int, vector<int> > q;
    for ( int i = 0; i < s.size(); i++) {
        if ( d[s[i]]>0) {
            q.push(d[s[i]]);
            d[s[i]] = 0;
        }
    }
    while ( k>0 && !q.empty() ) {
        k--;
        int tmp = q.top();
        q.pop();
        tmp--;
        q.push(tmp);
    }
    ll res = 0;
    while ( !q.empty() ) {
        int tmp = q.top();
        q.pop();
        res += tmp*tmp;
    }
    cout << res << endl;
}

int main()
{
    IOS()
    int test; cin >> test;
    while ( test-- ) {
        Input();
        Solve();
    }
    return 0;
}

// Code by Manh.