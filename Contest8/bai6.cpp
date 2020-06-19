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

void Init() {
    queue<string> q;
    q.push("9");
    for ( int i = 0; i <= M; i++) {
        string s1 = q.front();
        q.pop();
        v.push_back(s1);
        string s2 = s1;
        q.push(s1.append("0"));
        q.push(s2.append("9"));
    }
}

void Solve() {
    for ( int i = 0; i < v.size(); i++) {
        if ( stoi(v[i])%n==0 ) {
            cout << v[i] << endl;
            return;
        }
    }
}

int main()
{
    IOS()
    Init();
    int test; cin >> test;
    while ( test--) {
        Input();
        Solve();
    }
    return 0;
}

// Code by Manh.