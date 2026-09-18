// C1. Marenol (easy version)
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL))
#define _for(n) for (i = 0; i < n; i++)
using namespace std;

void solve() {
    int n, i, cta[2] = {}, ctb[2] = {};
    string a, b;
    cin >> n >> a >> b;
    _for(n) {
        if (a[i] == '1') cta[i%2]++; 
        if (b[i] == '1') ctb[i%2]++; 
    }
    cout << (cta[0] == ctb[0] && cta[1] == ctb[1] ? "YES" : "NO") << endl;
}

int main() {
    fastread();
    int test;
    cin >> test;
    while (test--) solve();
    return 0;
}