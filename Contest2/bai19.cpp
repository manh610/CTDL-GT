#include <bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long int ll;

int n, a[15];

void init() {
	cin >> n;
	for ( int i = 1; i <= n; i++) cin >> a[i];
}

void Result() {
	cout << "[";
	for ( int i = 1; i <= n; i++) {
		(i==n)?(cout<<a[i]<<"]"):cout<<a[i]<<" ";
	}
	cout << endl;
}

void Try(int i) {
	Result();
	n--;
	for ( int j = 1; j <= n; j++) {
		a[j] += a[j+1];
	}
	if (n<=0) return;
	else Try(i+1);
}

main()
{
	IOS()
    int test;
    cin >> test;
    while ( test-- ) {
    	init();
    	Try(1);
	}
}

// code by Manh.


