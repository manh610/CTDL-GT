
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void QS(int a[], int l, int r)
{
    int i = l;
    int j = r;
    int x = (l + r) / 2;
    do
    {
        while (a[i] < a[x] && i < r)
            i++;
        while (a[j] > a[x] && j > l)
            j--;
        if (i <= j)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    } while (i <= j);
    if (l < j)
        QS(a, l, j);
    if (i < r)
        QS(a, i, r);
}

void Solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    QS(a, 0, n - 1);
    for (auto x : a)
    {
        cout << x << ' ';
    }
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
