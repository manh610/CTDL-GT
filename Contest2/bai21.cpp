#include <iostream>
using namespace std;

int n, a[100];
bool check[100];
string s;

void Try(int i);
void Result();

main ()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	int test;
	cin >> test;
	while ( test-- ) {
		cin >> s;
		n = s.length();
		for ( int i = 1; i <= n; i++) {
		check[i] = true;
		}
		Try(1);
		cout << endl;
	}
}

void Try(int i) {
	for ( int j = 1; j <= n; j++) {
		if ( check[j] ) {
			a[i] = j;
			check[j] = false;
			if ( i==n ) 
				Result();
			else
				Try(i+1);
			check[j] = true;
		}
	}
}

void Result() {
	for ( int i = 1; i <= n; i++) {
		cout << s[a[i]-1];
	}
	cout << " ";
}

// code by Manh.


