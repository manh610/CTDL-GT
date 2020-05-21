#include<iostream>
#include<algorithm>
using namespace std;

struct Job {
    int stt, deadline, profit;
};

bool cmp( Job a, Job b ) { return a.profit > b.profit; }

int main() 
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int test;
    cin >> test;
    while ( test-- ) {
        int n;
        cin >> n;
        Job a[n];
        for ( int i = 0; i < n; i++ ) 
            cin >> a[i].stt >> a[i].deadline >> a[i].profit;
        sort(a,a+n,cmp);
        int dem = 0, ans = 0;
        int F[1001] = {0};
        for ( int i = 0; i < n; i++) {
            while ( F[a[i].deadline] && a[i].deadline > 0) a[i].deadline -= 1;
            if ( !F[a[i].deadline] && a[i].deadline>0 ) {
                F[a[i].deadline] = 1;
                ans += a[i].profit;
                dem++;
            }
        }
        cout << dem << ' ' << ans << endl;
    }
    return 0;
}