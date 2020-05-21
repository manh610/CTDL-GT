#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
main()
{
	int test;
	cin >> test;
	while ( test-- ) {
		int n;
		cin >> n;
		int a[n+5];
		for ( int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		int vt1 = -10, vt2;
		for ( int i = n-1; i >= 1; i--) {
			if ( a[i] < a[i+1] ) {
				vt1 = i;
				break;
			}
		}
		if ( vt1 < 0 ) {
			for ( int i = 1; i <= n; i++ ) cout << i << " ";
		}
		else {
			for ( int i = n; i >= 1; i--) {
				if ( a[i] > a[vt1] ) {
					vt2 = i;
					break;
				}
			}
			swap( a[vt1], a[vt2] );
			int left = vt1 + 1;
			for ( int i = left; i <= left + (n-left)/2; i++) {
				swap( a[i], a[n-i+left] );
			}
			for ( int i = 1; i<=n; i++) cout << a[i] << " ";
		}
		cout << endl;
	}
}

// code by Manh.

