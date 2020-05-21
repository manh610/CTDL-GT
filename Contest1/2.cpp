#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

main()
{
	int test;
	cin >> test;
	while ( test-- ) {
		int n,k;
		cin >> n >> k;
		int a[n+1];
		for ( int i = 1; i <= k; i++ ) cin >> a[i];
		int j = k;
		while ( a[j]==n-k+j ) j--;
		if ( j<1 ) {
			for ( int i = 1; i <= k; i++) {
				cout << i << " ";
			}
		}
		else {
			a[j]++;
			for ( int t = j + 1; t <= k; t++) {
				a[t] = a[j] + (t-j);
			}
			for ( int i = 1; i <= k; i++) {
				cout << a[i] << " ";
			}
		}
		cout << endl;
	}
}

// code by Manh.

