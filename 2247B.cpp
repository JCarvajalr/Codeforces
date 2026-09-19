// B. Yet Another Constructive
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL))
#define _for(n) for (i = 0; i < n; i++)
using namespace std;

void solve() {
    int n, i, k, m, temp;
    cin >> n >> k >> m;
    if (k > m) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    temp = m / k;
    cout << (temp + (m%k)) << " ";
    _for(k - 1) cout << temp << " ";
    _for(n - k) cout << "1" << " ";
    cout << endl;
}

int main() {
    fastread();
    int test;
    cin >> test;
    while (test--) solve();
    return 0;
}