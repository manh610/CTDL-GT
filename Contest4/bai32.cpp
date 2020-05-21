#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll merge(ll arr[], int l, int m, int r) 
{ 
    ll res = 0;
	int i, j, k; 
	int n1 = m - l + 1; 
	int n2 = r - m; 
	int L[n1], R[n2]; 
	for (i = 0; i < n1; i++) 
		L[i] = arr[l + i]; 
	for (j = 0; j < n2; j++) 
		R[j] = arr[m + 1+ j]; 
	i = 0; 
    j = 0;
	k = l; 
	while (i < n1 && j < n2) 
	{ 
		if (L[i] <= R[j]) 
		{ 
			arr[k] = L[i]; 
			i++; 
		} 
		else
		{ 
			arr[k] = R[j]; 
			j++; 
            res += n1-i;
		} 
		k++; 
	} 
	while (i < n1) 
	{ 
		arr[k] = L[i]; 
		i++; 
		k++; 
	} 
	while (j < n2) 
	{ 
		arr[k] = R[j]; 
		j++; 
		k++; 
	} 
    return res;
} 

ll mergeSort(ll arr[], int l, int r) 
{ 
    ll res = 0;
	if (l < r) 
	{ 
		int m = l+(r-l)/2; 
		res += mergeSort(arr, l, m); 
		res += mergeSort(arr, m+1, r); 
		res += merge(arr, l, m, r); 
	} 
    return res;
} 

int main() 
{ 
    int test; cin >> test;
    while ( test-- ) {
        ll n; cin >> n;
        ll arr[n+2];
        for ( ll i = 0; i < n; i++) cin >> arr[i];
        cout << mergeSort(arr,0,n-1) << endl;
    } 
	return 0; 
} 
