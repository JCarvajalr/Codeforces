// A. Zero Sum
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL))
#define _for(n) for (i = 0; i < n; i++)
using namespace std;

void solve() {
    int n, i, temp, r = 0, s = 0;
    cin >> n;

    _for(n) {
        cin >> temp;
        if (temp == 1) s++;
        else r++;
    }
    if (n % 2 == 0 && abs((r - s) % 4 == 0)) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    fastread();
    int test;
    cin >> test;
    while (test--) solve();
    return 0;
}