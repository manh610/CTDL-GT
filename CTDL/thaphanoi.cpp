#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define NN QT
typedef double ld;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> II;
const int im = INT_MAX;
const int in = INT_MIN;

void chuyen(int n, char a, char c)
{
    printf("Chuyen dia thu %d tu cot %c sang cot %c\n", n, a, c);
    return;
}
void thapHN(int n, char a, char c, char b)
{
    if (n == 1)
        chuyen(1, a, c);
    else
    {
        thapHN(n - 1, a, b, c);
        chuyen(n, a, c);
        thapHN(n - 1, b, c, a);
    }
    return;
}
int main()
{
    int t = 1;
    // cin>>t;
    while (t--)
    {
        int n;
        cin >> n;
        char a, b, c;
        a = 'a';
        b = 'b';
        c = 'c';
        thapHN(n, a, c, b);
    }
    return 0;
}