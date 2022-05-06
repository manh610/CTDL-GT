#include <iostream>
#include<string>
#include <sstream>
typedef long long ll;

using namespace std;

ll a,b;

void Input() {
	 cin >> a >> b;
}

ll Max() {
	 stringstream ss;
	ss << a;
	 string a1 = ss.str();
	 stringstream ss1;
	ss1 << b;
	 string a2 = ss1.str();
	for ( int i = 0; i < a1.size(); i++)
		if ( a1[i]=='5') a1[i]='6';
	for ( int i = 0; i < a2.size(); i++)
		if ( a2[i]=='5') a2[i]='6';
	 istringstream iss (a1);
	ll num1,num2;
	iss >> num1;
	 istringstream iss1 (a2);
	iss1 >> num2;
	return num1+num2;
}

ll Min() {
	 stringstream ss;
	ss << a;
	 string a1 = ss.str();
	 stringstream ss1;
	ss1 << b;
	 string a2 = ss1.str();
	for ( int i = 0; i < a1.size(); i++)
		if ( a1[i]=='6') a1[i]='5';
	for ( int i = 0; i < a2.size(); i++)
		if ( a2[i]=='6') a2[i]='5';
	 istringstream iss (a1);
	ll num1,num2;
	iss >> num1;
	 istringstream iss1 (a2);
	iss1 >> num2;
	return num1+num2;
}

void Solve() {
	 cout << Min() << " " << Max() << "\n"; 
}

main()
{
	int test;  cin >> test;
	while ( test-- ) {
		Input();
		Solve();	
	}
	
}

// code by Manh.





