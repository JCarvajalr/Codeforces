// D. Backrooms Hill
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL))
using namespace std;

void solve() {
    int n, i, temp;
    cin >> n;
    vector<int> pos(n+1, 0);
    for(i = 1; i <= n; i++) {
        cin >> temp;
        pos[temp] = i%2;
    }
    bool res = 1; int t = 0;
    for (i = n; i > 1 && res; i--) {
        if (pos[i] % 2 == 0) t++;
        else t--;

        if (abs(t) > 1) res = 0;
    }
    cout << (res ? "YES" : "NO") << "\n";
}

int main() {
    fastread();
    int test;
    cin >> test;
    while (test--) solve();
    return 0;
}