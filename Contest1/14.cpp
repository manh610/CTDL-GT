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
		int a[k+5], b[100] = {0};
		for ( int i = 1; i <= k; i++ ) {
			cin >> a[i];
			b[a[i]] = 1;
		}
		int t = k;
		while ( a[t]==(n-k+t) ) {
			t--;
		}
		if ( t<1 ) cout << k;
		else {
			a[t]++;
			for ( int j = t+1; j <=k; j++) {
				a[j] = a[t] + (j-t);
			}
			int dem = 0;
			for ( int i = 1; i <= k; i++) {
				if ( b[a[i]]!=1 ) dem++;
			}
			cout << dem;
		}
		cout << endl;
	}
}

// code by Manh.

