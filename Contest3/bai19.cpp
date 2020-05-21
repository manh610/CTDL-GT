#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;

ll tu,mau;

void Input() {
    cin >> tu >> mau;
}

void Solve() {
    ll res;
    while ( 1 ) {
        if ( mau%tu==0 ) {
            cout << "1/"<<mau/tu<<endl;
            break;
        }
        else {
            res = mau/tu + 1;
            cout << "1/"<<res<<" + ";
            tu = tu*res - mau;
            mau = mau*res;
        }
    }
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