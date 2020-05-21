#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define ll long long
const int MAX = 100005;
int a[15][15],k, n;
vector <string> res;
string s;

void init() {
	cin >> n;
	for (int i=1; i<=n;i++)
		for(int j=1;j<=n;j++)
			cin >> a[i][j];
	s.clear();
	res.clear();
}

void print() {
	if (a[1][1]==0) {
		cout << "-1";
		return ;
	}
	else if (res.empty()) {
		cout << "-1";
		return;
	}
	else {
		for (int i = 0; i<res.size(); i++) {
			cout << res[i] << " ";
		}
	}
}

void Try(int i,int j,string s) {
	if(i==n&&j==n) {
		res.push_back(s);
	}
	if(i+1<=n && a[i+1][j]==1) {
		s.push_back('D');
		Try(i+1,j,s);
		s.pop_back();
	}
	if(j+1<=n && a[i][j+1]==1){
		s.push_back('R');
		Try(i,j+1,s);
		s.pop_back();
	}
}

void solve() {
	Try(1,1,s);
	print();
	cout << endl;
	
}

int main() {

	int test = 1;
	cin >> test;
	while (test--) {
		init();
		solve();
	}

	return 0;
}



