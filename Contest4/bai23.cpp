#include <bits/stdc++.h>
using namespace std;

int search (int n, long long k) {
	if ( k==pow(2,n-1) ) return n;
	if ( k < pow(2,n-1) ) search(n-1,k);
	else search( n-1, k - pow(2,n-1) );
}

main ()
{
	int test;
	cin >> test;
	while ( test-- ) {
		int n;
		long long k;
		cin >> n >> k;
		cout << search(n,k) << endl;
	}
}

// code by Manh.


