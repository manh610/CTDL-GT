#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;

int n;
int c[100][100];
int ans[100];
bool check[100];

void Input() {
    cin >> n;
    for ( int i = 1; i <= n; i++) {
        for ( int j = 1; j <= n; j++) 
            cin >> c[i][j];
    }
    for ( int i = 1; i <= n; i++) check[i] = false;
}

void Solve() {
    int cost = 0;
    ans[1] = 1; check[1] = true;
    int i = 1;
    while ( i <= n ) {
        i++;
        int b = INT_MAX, tmp;
        for ( int j = 2; j <= n; j++) {
            if ( !check[j] && c[ans[i-1]][j]>0 && c[ans[i-1]][j]<b ) {
                b = c[ans[i-1]][j];
                tmp = j;
            }
        }
        ans[i] = tmp;
        cost += c[ans[i-1]][tmp];
        check[tmp] = true;
    }
    cost += c[ans[n]][1];
    cout << cost << endl;
    for ( int i = 1; i <= n; i++) cout << ans[i] << " ";
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
/*
0 48 43 54 31
20 0 30 63 22
29 64 0 4 7
6 19 2 0 8
1 28 7 18 0
*/
