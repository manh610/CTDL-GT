#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int n, a[20];

void In() {
	for ( int i = 1; i <= n; i++) {
		if ( a[i]==0 ) cout << "A";
		else cout << "B";
	}
	cout << " ";
}

void Try(int i) {
	for ( int j = 0; j<=1; j++) {
		a[i] = j;
		if ( i==n ) In();
		else Try(i+1);
	}
}

main()
{
	int test;
	cin >> test;
	while ( test-- ) {
		cin >> n;
		Try(1);
		cout << endl;
	}
}

// code by Manh.

