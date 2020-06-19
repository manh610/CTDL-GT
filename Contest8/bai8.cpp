#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;
const int M = 10000;

int n;
vector<string> v;

void Input() {
    cin >> n;
}

void Solve() {
    queue<string> q;
    q.push("1");
    while ( q.size()>0 ) {
        string res = q.front(); q.pop();
        ll tmp = 0;
        for ( int i = 0; i < res.size(); i++) {
            tmp = tmp*10 + int(res[i]-'0');
        }
        if ( tmp%n==0 ) {
            cout << res << endl;
            return;
        }
        q.push(res+"0");
        q.push(res+"1");
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