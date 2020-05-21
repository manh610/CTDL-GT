#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int n, a[15], tmp;

void init() {
	cin >> n;
	for ( int i = 1; i <= n; i++) cin >> a[i];
	tmp = n;
}

void Result() {
	cout << "[";
	for ( int i = 1; i <= n; i++) {
		(i==n)?(cout<<a[i]<<"]"):cout<<a[i]<<" ";
	}
	cout << " ";
}

void Try(int i) {
	if ( i<tmp ) {
		n--;
		for ( int j = 1; j <= n; j++) {
			a[j] += a[j+1];
		}
	}
	if (i>=tmp) {
		Result();
		n++;
		for ( int t = n-1; t>=1; t--) {
			a[t] = a[t] - a[t+1];
		}
		if (n>tmp) return;
	}
	Try(i+1);
}

main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    while ( test-- ) {
    	init();
    	Try(1);
    	cout << endl;
	}
}

// code by Manh.


