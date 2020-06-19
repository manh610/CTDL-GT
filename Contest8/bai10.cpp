#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;
const int mod = 1e9+7;

int n;

void Input() {
    cin >> n;
}

void Solve() {
    set<int> a;
    queue<pair<int,int>> q;
    a.insert(n);
    q.push({n,0});
    while ( !q.empty() ) {
        pair<int,int> tmp = q.front();
        q.pop();
        if ( tmp.first==1 ) {
            cout << tmp.second << endl;
            return;
        }
        if ( tmp.first-1==1 ) {
            cout << tmp.second+1 << endl;
            return;
        }
        if ( a.find(tmp.first-1)==a.end() && tmp.first-1>0 ) {
            q.push({tmp.first-1,tmp.second+1});
            a.insert(tmp.first-1);
        }
        for ( int i = 2; i*i <= tmp.first; i++) {
            if ( tmp.first%i==0 ) {
                if ( a.find(tmp.first/i)==a.end() ) {
                    q.push({tmp.first/i,tmp.second+1});
                    a.insert(tmp.first/i);
                }
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