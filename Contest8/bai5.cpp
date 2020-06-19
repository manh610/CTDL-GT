#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;

int n;

void Input() {
    cin >> n;
}

void Solve() {
    queue<string> q;
    q.push("1");
    while ( n-- ) {
        string s1 = q.front();
        q.pop();
        cout << s1 << " ";
        string s2 = s1;
        q.push(s1.append("0"));
        q.push(s2.append("1"));
    }
    cout << endl;
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