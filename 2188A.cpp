// A. Divisible Permutation
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL))
using namespace std;

int res[105];

void solve() {
    int n, i, a, b;
    bool t = 1;
    cin >> n;
    for (i = n, a=1, b=n; i >= 0; i--) {
        if (t) res[i] = b--;
        else res[i] = a++;
        t = !t;
    }
    for(i=1; i<=n; i++) cout << res[i] << " ";
    cout << endl;
}

int main() {
    fastread();
    int test;
    cin >> test;
    while (test--) solve();
    return 0;
}