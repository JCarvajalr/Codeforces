// C. Omsk Programmers
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL))
using namespace std;

void solve() {
    int a, b, x, res, cnt = 0;
    cin >> a >> b >> x;
    if (a < b) swap(a, b);
    res = a-b;
    while (a != b) {
        a /= x; cnt++;
        if (a < b) swap(a, b);

        res = min(res, (cnt + (a-b)));
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