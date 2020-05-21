#include <bits/stdc++.h> 
using namespace std; 

int search(int arr[], int l, int h, int key) 
{ 
	int mid = (l+h)/2; 
	if (arr[mid] == key) return mid; 
	if (arr[l] <= arr[mid]) 
	{ 
		if (key >= arr[l] && key <= arr[mid]) 
		return search(arr, l, mid-1, key); 
		return search(arr, mid+1, h, key); 
	} 
	if (key >= arr[mid] && key <= arr[h]) 
		return search(arr, mid+1, h, key); 

	return search(arr, l, mid-1, key); 
} 

int main() 
{ 
	int test; cin >> test;
    while ( test-- ) {
        int n,x; cin >> n >> x;
        int a[n+2]; 
        for ( int i = 0; i < n; i++) cin >> a[i];
        cout << search(a,0,n-1,x) + 1 << endl;
    }
    return 0;
} 
