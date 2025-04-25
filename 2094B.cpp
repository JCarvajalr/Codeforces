// B. Bobritto Bandito
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long
#define _for(n) for (i = 0; i < n; i++)
 
using namespace std;
void solve() {
    int n, m, l, r, temp, less;
    cin >> n >> m >> l >> r;
    
    if (m < n) {
        less = n - m;
        if (l < 0) {
            if ((l*-1) < less) {
                less += l;
                l = 0;
            }
            else {
                l += less;
                less = 0;
            }
        }
        if (less > 0) {
            r -= less;
            less = 0;
        }
    }
    cout << l << " " << r << endl;
}
 
int main() {
    fastread();
    int test;
    cin >> test;
    while (test--) solve();
    return 0;
}