
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int Max(int a[], int l, int r)
{
    if (l >= r)
        return a[l];
    int mid = (l + r) / 2;
    int u = Max(a, l, mid);
    int v = Max(a, mid + 1, r);
    return max(u, v);
}

void Solve()
{
    int n;
    cin >> n;
    int a[n + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << Max(a, 0, n - 1) << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    //cin >> t;
    for (int i = 1; i <= t; i++)
    {
        Solve();
    }
    return 0;
}
