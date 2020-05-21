#include <iostream>
using namespace std;

int n, a[100];
bool check[100];

void display();
void Try(int i);

int main() {
	int test;
	cin >> test;
	while ( test-- ) {
		cin >> n;
		for ( int i = 1; i <= n; i++) {
			check[i] = true;
		}
		Try(1);
		cout << endl;
	}
	return 0;
}

void display() {
	for ( int i = 1; i <= n; i++) {
		cout << a[i];
	}
	cout << " ";
}

void Try( int i) {
	for ( int j = n; j >=1; j--) {
		if ( check[j] ) {
			a[i] = j;
			check[j] = false;
			if ( i==n ) 
				display();
			else
				Try(i+1);
			check[j] = true;
		}
	}
}
