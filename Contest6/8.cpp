#include<bits/stdc++.h> 
using namespace std; 

int count(int x, int Y[], int n, int NoOfY[]) 
{ 
	if (x == 0) return 0; 
	if (x == 1) return NoOfY[0]; 
	int* idx = upper_bound(Y, Y + n, x); 
	int ans = (Y + n) - idx; 
	ans += (NoOfY[0] + NoOfY[1]); 
	if (x == 2) ans -= (NoOfY[3] + NoOfY[4]); 
	if (x == 3) ans += NoOfY[2]; 

	return ans; 
} 

int countPairs(int X[], int Y[], int m, int n) 
{ 
	int NoOfY[5] = {0}; 
	for (int i = 0; i < n; i++) 
		if (Y[i] < 5) 
			NoOfY[Y[i]]++; 
	sort(Y, Y + n); 
	int total_pairs = 0;
	for (int i=0; i<m; i++) 
		total_pairs += count(X[i], Y, n, NoOfY); 

	return total_pairs; 
} 

int main() 
{ 
    int test; cin >> test;
    while ( test-- ) {
        int m,n; cin >> m >> n;
        int X[m+1], Y[n+1];
        for ( int i = 0; i < m; i++) cin >> X[i];
        for ( int i = 0; i < n; i++) cin >> Y[i];
        cout << countPairs(X, Y, m, n) << endl;
    } 
	return 0; 
}

// Code by Manh.