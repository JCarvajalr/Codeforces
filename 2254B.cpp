// B. Evanescent
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL))
#define ll long long
using namespace std;

void solve() {
    int n, i, res, t;
    string s;
    cin >> n >> s;
    res = 1; t = 0;
    for (i = 1; i < n; i++) {
        if (i < n-1 && s[i-1] != s[i] && s[i] != s[i+1]) {
            if (s[i-1] == s[i+1]) t = 2;
            else t = max(t, 1);
        }
        if (s[i-1] != s[i]) res++;
    }
    cout << res - t << "\n";

}

int main() {
    fastread();
    int test;
    cin >> test;
    while (test--) solve();
    return 0;
}