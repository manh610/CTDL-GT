
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll poww(int x, int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return x;
    ll a = poww(x, n / 2);
    if (n % 2 == 0)
        return a * a;
    return a * a * x;
}

void Solve()
{
    int x, n;
    cin >> x >> n;
    cout << poww(x, n) << endl;
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
