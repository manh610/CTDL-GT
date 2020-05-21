//#include <bits/stdc++.h>
//using namespace std;
//typedef long long int ll;
//main()
//{
//	int test;
//	cin >> test;
//	while  ( test-- ) {
//		int stt = 1; 
//		cout << stt <<" ";
//		cin.ignore();
//		string s;
//		cin >> s;
//		int n = s.size();
//		int vt1 = -10, vt2;
//		for ( int i = n-2; i >= 0; i--) {
//			if ( s[i] < s[i+1] ) {
//				vt1 = i;
//				break;
//			}
//		}
//		if ( vt1<0 ) cout << "BIGGEST";
//		else {
//			for ( int i = n-1; i >= 0; i--) {
//				if ( s[i] > s[vt1] ) {
//					vt2 = i;
//					break;
//				}
//			}
//			swap( s[vt1], s[vt2] );
//			int left = vt1 + 1;
//			for ( int i = left; i <= left + (n-1-left)/2; i++) {
//				swap( s[i], s[n-1-i+left] );
//			}
//			cout << stt << " " << s;
//		}
//		cout << endl;
//		stt++;
//	}
//}
//
//// code by Manh.

#include <bits/stdc++.h>
using namespace std;
main() {
	int test;
	cin >> test;
	for ( int i = 1; i <= test; i++) {
		int tmp; cin >> tmp;
		cout << tmp << " ";
		string s;
		cin >> s;
		if ( next_permutation(s.begin(),s.end()) ) {
			cout << s;
		}
		else cout << "BIGGEST";
		cout << endl;
	}
}

