#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;


int main()
{
    IOS()
    ll test; cin >> test;
    string s;
    int x;
    deque<int> dq;
    while ( test--) {
        cin >> s;
        if ( s=="PUSHBACK" ) {
            cin >> x;
            dq.push_back(x);
        }
        else if ( s=="PUSHFRONT" ) {
            cin >> x;
            dq.push_front(x);
        }
        else if ( s=="POPFRONT") {
            int k = dq.size();
            if ( k>0 ) dq.pop_front();
        }
        else if ( s=="POPBACK") {
            int k = dq.size();
            if ( k>0 ) dq.pop_back();
        }
        else if ( s=="PRINTFRONT") {
            int k = dq.size();
            if ( k>0 ) cout << dq.front() << endl;
            else cout << "NONE" << endl;
        }
        else {
            if ( dq.size()>0 ) cout << dq.back() << endl;
            else cout << "NONE" << endl;
        }
    }
    return 0;
}

// Code by Manh.