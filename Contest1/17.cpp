#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int n, a[20];
bool check;

void init() {
	cin >> n;
	for ( int i = 1; i <= 16; i++) {
		a[i] = 0;
	}
	check = true;
}

void Next() {
	int i = 16;
	while ( i>0 && a[i]==1 ) {
		a[i] = 0;
		i--;
	}
	if ( i>0 ) a[i] = 1;
	else check = false;
}

void Result() {
	long long ans = a[1];
	for ( int i = 2; i <= 16; i++) {
		ans = ans*10 + a[i];
	}
	if ( (ans*9)%n==0 ) {
		cout << ans*9 << endl;
		check = false;
	}
}

main()
{
	int test;
	cin >> test;
	while ( test-- ) {
		init();
		while ( check ) {
			Next();
			Result();
		}
	}
}

// code by Manh.

