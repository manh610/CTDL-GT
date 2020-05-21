#include <iostream>
using namespace std;
int n;
bool nguoc[22], h[11], c[11], xuoi[22];
int x[11];
int matrix[10][10];
int ans;
void Init() {
	for ( int i = 1; i <= 8; i++ ) {
		for ( int j = 1; j <= 8; j++) {
			cin >> matrix[i][j];
		}
	}
	n = 8;
	for ( int i = 0; i <= 11; i++)
		h[i] = c[i] = true;
	for ( int i = 0; i < 22; i++) 
		nguoc[i] = xuoi[i] = true;
	ans = 0;
}

void Try(int i) {
	for ( int j = 1; j <= 8; j++) {
		if ( h[j] && c[j] && xuoi[i-j+n] && nguoc[i+j-1] ) {
			x[i] = j;
			h[j] = c[j] = false;
			xuoi[i-j+n] = false;
			nguoc[i+j-1] = false;
			if ( i==8 ) {
				int s = 0;
				for ( int l = 1; l <= 8; l++)
					s += matrix[l][x[l]];
				ans = max(ans,s);
			}
			else Try(i+1);
			h[j] = c[j] = true;
			xuoi[i-j+n] = true;
			nguoc[i+j-1] = true;
		}
	}
}

main ()
{
	int test; cin >> test;
	while ( test-- ) {
		Init();
		Try(1);
		cout << ans << endl;	
	}
}

// code by Manh.


