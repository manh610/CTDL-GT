#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;
const int mod = 1e9+7;

int s,t;

void Input() {
    cin >> s >> t;
}

void Solve() {
    set<int> a;
    a.insert(s);
    queue<pair<int,int>> q;
    q.push({s,0});
    while ( !q.empty() ) {
        pair<int,int> tmp = q.front();
        q.pop();
        if ( tmp.first==t ) {
            cout << tmp.second << endl;
            return;
        }
        if ( tmp.first*2==t || tmp.first-1==t ) {
            cout << tmp.second+1 << endl;
            return;
        }
        if ( a.find(tmp.first*2)==a.end() && tmp.first<t ) {
            q.push({tmp.first*2,tmp.second+1});
            a.insert(tmp.first*2);
        }
        if ( a.find(tmp.first-1)==a.end() && tmp.first-1>0 ) {
            q.push({tmp.first-1,tmp.second+1});
            a.insert(tmp.first-1);
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