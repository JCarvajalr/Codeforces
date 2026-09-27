// A. Rumb Needs a Hand
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL))
#define _for(n) for (i = 0; i < n; i++)
#define _forj(n) for (j = 0; j < n; j++)
#define deb(x) cout << " ." << #x << "=" << x << endl
#define deb2(a, b) cout << "  /:" << #a << "=" << a << " , " << #b << "=" << b << endl
#define sortAsc(vect) sort(vect.begin(), vect.end())
using namespace std;

void solve() {
    int n, i;
    cin >> n;
    vector<int> ar(n), sor;
    _for(n) cin >> ar[i];
    sor = ar;
    sortAsc(sor);
    bool res = 1;
    int last = INT_MAX;
    _for(n) {
        if (ar[i] != sor[i]) {
            if (ar[i] > last) {
                res = 0;
                break;
            }
            last = ar[i];
        }
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