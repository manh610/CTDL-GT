#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;

int a[100],n,k;

void Result(){
	for ( int i = 1; i<=n; i++) {
		cout << a[i];
	}
	cout << endl;
}

bool Test() {
	int dem = 0;
	for ( int i = 1; i <= n; i++) {
		if ( a[i]==1 ) dem++;
	}
	if ( dem==k ) return true;
	return false; 
}

void quay_lui(int k ) {
	for ( int i = 0; i<=1; i++ ) {
		a[k] = i;
		if ( k==n ) {
			if ( Test() ) Result();
		}
		else quay_lui(k+1);
	}
}

main ()
{
	int test;
	cin >> test;
	while ( test-- ) {
		cin >> n >> k;
		quay_lui(1);	
	}

}

// code by Manh.


