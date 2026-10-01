// B1. Carrot Chopdown (Easy Version)
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL))
#define ll long long
#define _for(n) for (i = 0; i < n; i++)
#define deb(x) cout << " ." << #x << "=" << x << endl
using namespace std;

void solve() {
    int n, m, i, temp;
    cin >> n >> m;
    vector<ll> freq(m+2, 0);
    ll res = n, r;
    _for(n) {
        cin >> temp;
        freq[temp]++;
    }
    for(i = m; i > 0; i--) freq[i-1] += freq[i];
    
    for(i = 1; i <= m; i++) {
        r = freq[i];
        if (i*2 <= m) r += freq[i*2] - freq[i*2 + 1];
        res = max(r, res);
    }
    // deb(res);
    cout << res << "\n";
}

int main() {
    fastread();
    int test;
    cin >> test;
    while (test--) solve();
    return 0;
}