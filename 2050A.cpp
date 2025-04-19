// A. Line Breaks
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long
#define _for(n) for (i = 0; i < n; i++)

using namespace std;
void solve() {
    int n, m, a, i;

    cin >> n >> m;
    vector<string> words(n);
    _for(n) cin >> words[i];
    
    for (i = 0; (m > 0) && i < n; i++) {
        m -= words[i].size();
        if (m < 0) i--;
    }
    cout << (i) << endl;
}

int main() {
    fastread();
    int test;
    cin >> test;
    while (test--) solve();

    return 0;
}