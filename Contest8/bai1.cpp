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
    int y;
    queue<int> q;
    while ( n-- ) {
        int x; cin >> x;
        if ( x==1 ) cout << q.size() << '\n';
        else if ( x==2 ) {
            if ( q.empty() ) cout << "YES\n";
            else cout <<"NO\n";
        }
        else if ( x==3 ) {
            cin >> y;
            q.push(y);
        }
        else if ( x==4 && !q.empty() ) q.pop();
        else if ( x==5 ) {
            if ( q.empty() ) cout << -1 <<'\n';
            else cout << q.front() << '\n';
        }
        else if ( x==6 ) {
            if ( q.empty() ) cout << -1 << '\n';
            else cout << q.back() << '\n';
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