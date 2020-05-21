#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

string Next_binary(string &s) {
	int i = s.size()-1;
	while ( s[i]!='0' && i>=0 ) {
		s[i] = '0';
		i--;
	}
	if( i>=0 ) s[i] = '1'; 
	return s;
}

main()
{
	int test;
	cin >> test;
	while ( test-- ) {
		string s;
		cin >> s;
		cout << Next_binary(s) << endl;
	}
}

// code by Manh.

