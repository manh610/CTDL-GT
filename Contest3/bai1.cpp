#include <bits/stdc++.h>
using namespace std;
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long int ll;

int n;
int a[] = {1,2,5,10,20,50,100,200,500,1000};
void Input() {
	cin >> n;
}

void Solve() {
	int res = 0;
	for ( int i = 9; i >=0 ; i--) {
		res += n/a[i];
		n%=a[i];
	}
	cout << res << endl;
}

main()
{
	IOS()
	int test;
	cin >> test;
	while ( test-- ) {
		Input();
		Solve();
	}
}

// code by Manh.




