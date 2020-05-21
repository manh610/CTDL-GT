#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;

int n, k;
vector<int> a;

void Input() {
    cin >> n >> k;
    a.resize(n);
    for(int i = 0; i < n; i++) cin >> a[i];
}

void Solve() {
    int left = 0, right = n;
    while ( left <= right ) {
        int mid = (left+right)/2;
        if ( a[mid]==k ) {
            cout << mid + 1 << endl;
            return;
        }
        else if ( a[mid] < k ) 
            left  = mid+1;
        else
            right = mid-1;
    }
    cout << "NO" << endl;
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