// D. MEX Multiset
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL))
#define ll long long
#define _for(n) for (i = 0; i < n; i++)
using namespace std;

int ar[200005];

void solve() {
    int n, i, z = 0;
    cin >> n;
    _for(n) {
        cin >> ar[i];
        if (ar[i] == 0) z++;
    }

    if (z == 1) {
        cout << "NO" << endl; return;
    }
    cout << "YES\n";
    bool flag = 0;
    _for(n) {
        if (ar[i] != 0) cout << "C";
        else if (flag) cout << "A";
        else {
            flag = 1;
            cout << "B";
        }
    }
    cout << endl;
}

int main() {
    fastread();
    int test;
    cin >> test;
    while (test--) solve();
    return 0;
}