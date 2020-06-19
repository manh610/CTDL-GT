
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[100], n, x;
int BS(int l, int r, int x)
{
    if (l > r)
        return -1;
    int mid = (l + r) / 2;
    if (a[mid] == x)
        return mid;
    else if (a[mid] < x)
    {
        return BS(mid + 1, r, x);
    }
    else
    {
        return BS(l, mid - 1, x);
    }
}
void Input()
{
    cin >> n >> x;
    for (int i = 0; i < n; i++)
        cin >> a[i];
}
void Solve()
{
    cout << BS(0, n - 1, x) << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    //cin >> t;
    for (int i = 1; i <= t; i++)
    {
        Input();
        Solve();
    }
    return 0;
}
