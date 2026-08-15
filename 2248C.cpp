// C. Maximize the Score
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL))
#define ll long long
using namespace std;

void solve() {
    int n, i;
    cin >> n;
    vector<int> ar(n*2+1), l(n+1, 0), r(n+1, 0);
    vector<ll> dp(n*2+1, 0);
    for(i = 1; i <= n*2; i++) {
        cin >> ar[i];
        if (l[ar[i]] > 0) r[ar[i]] = i;
        else l[ar[i]] = i;
    }
    ll temp;
    for(i = 1; i <= n*2; i++) {
        dp[i] = dp[i-1] + 1;
        if (r[ar[i]] == i) {
            temp = i - l[ar[i]] + 1;
            dp[i] = max(dp[i], temp*temp + dp[l[ar[i]] - 1]);
        }
    }
    cout << dp.back() << endl;
}

int main() {
    fastread();
    int test;
    cin >> test;
    while (test--) solve();
    return 0;
}