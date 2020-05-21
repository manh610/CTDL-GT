#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int a[100],n,b[100];

void Result(){
	for ( int i = 1; i<=n; i++) {
		cout << b[i];
	}
	cout << " ";
}

void Xuly() {
	b[1] = a[1];
	for ( int i = 2; i <= n; i++) {
		b[i] = a[i-1]^a[i];
	}
	Result();
}


void Try(int k ) {
	for ( int i = 0; i<=1; i++ ) {
		a[k] = i;
		if ( k==n ) Xuly();
		else Try(k+1);
	}
}
main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    while ( test-- ) {
    	cin >> n;
    	Try(1);
    	cout << endl;
	}
}

// code by Manh.


