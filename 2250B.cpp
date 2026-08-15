// B. String Construction
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL))
#define ll long long
#define _for(n) for (i = 0; i < n; i++)
using namespace std;

void solve() {
    int i;
    ll n, k;
    cin >> n >> k;

    if (n - k <= 1) {
        cout << -1 << endl;
        return;
    }
    ll a = k/2 + 1, b = k/2 + 1 + (k%2);
    string res = "";
    res.append(a, '1'); res.append(b, '0');
    n -= (a + b);
    _for(n) {
        res += (i % 2 == 0) ? "1" : "0";
    }
    cout << res << endl;
}

int main() {
    fastread();
    int test;
    cin >> test;
    while (test--) solve();
    return 0;
}