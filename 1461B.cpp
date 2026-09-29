// B. Find the Spruce
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL))
#define deb(x) cout << " ." << #x << "=" << x << endl
#define deb2(a, b) cout << "  /:" << #a << "=" << a << " , " << #b << "=" << b << endl
using namespace std;

int dp[505][505];

void solve() {
    int n, m, i, j;
    cin >> n >> m;
    string spt[n];
    for (i = 0; i < n; i++) cin >> spt[i];
    int ans = 0;

    for (i = 0; i <= n; i++) for (j = 0; j <= m; j++) dp[i][j] = 0;

    for (i = n-1; i >= 0; i--) {
        for (j = 0; j < m; j++) {
            if (spt[i][j] != '*') continue;
            dp[i][j] = min(dp[i+1][j-1], min(dp[i+1][j], dp[i+1][j+1]));
            dp[i][j]++;
            ans += dp[i][j];
        }
    }
    cout << ans << "\n";
}

int main() {
    fastread();
    int test;
    cin >> test;
    while (test--) solve();
    return 0;
}