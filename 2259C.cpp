// C. 101
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL))
#define ll long long
#define _for(n) for (i = 0; i < n; i++)
using namespace std;

void solve() {
    int n, i;
    cin >> n;
    int ar[n];
    _for(n) cin >> ar[i];

    for(i = 0; i < n; i++) if (ar[i] != 0) ar[i] = 1, i = n;
    for(i = n-1; i >= 0; i--) if (ar[i] != 0) ar[i] = 1, i = -1;

    _for(n) cout << (ar[i] == 1) << " ";
    cout << endl;
}

int main() {
    fastread();
    int test;
    cin >> test;
    while (test--) solve();
    return 0;
}