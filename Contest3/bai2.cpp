#include <bits/stdc++.h>
using namespace std;
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long int ll;
 
int a,b;

void Input() {
	cin >> a >> b;
}

int Max(int a) {
	int i = 0;
	int res = a;
	while ( a>0 ) {
		int t = a%10;
		if ( t==5 ) res+=pow(10,i);
		a/=10;
		i++;
	}
	return res;
}
int Min(int a) {
	int i = 0;
	int res = a;
	while ( a>0 ) {
		int t = a%10;
		if ( t==6 ) res-=pow(10,i);
		a/=10;
		i++;
	}
	return res;
}

void Solve() {
	cout << Min(a)+Min(b) << " " << Max(a) + Max(b) << endl;
}

main()
{
	IOS()
	Input();
	Solve();
}

// code by Manh.




