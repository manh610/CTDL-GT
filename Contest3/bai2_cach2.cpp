#include <iostream>
#include<string>
#include <sstream>

int a,b;

void Input() {
	std::cin >> a >> b;
}

int Max() {
	std::stringstream ss;
	ss << a;
	std::string a1 = ss.str();
	std::stringstream ss1;
	ss1 << b;
	std::string a2 = ss1.str();
	for ( int i = 0; i < a1.size(); i++)
		if ( a1[i]=='5') a1[i]='6';
	for ( int i = 0; i < a2.size(); i++)
		if ( a2[i]=='5') a2[i]='6';
	std::istringstream iss (a1);
	int num1,num2;
	iss >> num1;
	std::istringstream iss1 (a2);
	iss1 >> num2;
	return num1+num2;
}

int Min() {
	std::stringstream ss;
	ss << a;
	std::string a1 = ss.str();
	std::stringstream ss1;
	ss1 << b;
	std::string a2 = ss1.str();
	for ( int i = 0; i < a1.size(); i++)
		if ( a1[i]=='6') a1[i]='5';
	for ( int i = 0; i < a2.size(); i++)
		if ( a2[i]=='6') a2[i]='5';
	std::istringstream iss (a1);
	int num1,num2;
	iss >> num1;
	std::istringstream iss1 (a2);
	iss1 >> num2;
	return num1+num2;
}

void Solve() {
	std::cout << Min() << " " << Max();
}

main()
{
	Input();
	Solve();
}

// code by Manh.





