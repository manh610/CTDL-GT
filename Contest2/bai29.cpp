#include <bits/stdc++.h>
using namespace std;
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long int ll;

int m,n;
int a[105][105];

void Input() {
	cin >> m >> n;
	for ( int i = 0; i < m; i++)
		for ( int j = 0; j < n; j++)
			cin >> a[i][j];
}

ll C(int n , int k){
    ll res = 1;
    for(int i = 1; i <= k ; i++ , n --){
        res = res*n/i;
    }
    return res;
}

void Solve() {
	if ( n==1 || m==1 ) 
		cout << "1";
	else
		 cout << C(n+m-2,n-1);
	cout << endl;
}

main()
{
	IOS()
	int test;
	cin >> test;
	while ( test-- ) {
		Input();
		Solve();
	}
}

// code by Manh.




