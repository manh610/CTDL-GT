#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;

int main()
{
    IOS()
    vector<int> q;
    string s;
    int n;
    while ( cin >> s ) {
        if ( s[0]=='\0' ) break;
        if ( s[1]=='u' ) {
            cin >> n;
            cin.ignore();
            q.push_back(n);
        }
        else if ( s[1]=='o' ) q.pop_back();
        else {
            if ( q.size()!=0 ) {
                for ( int i:q ) cout << i << " ";
            }
            else cout << "empty";
            cout << endl;
        } 
    }
    return 0;
}

// Code by Manh.