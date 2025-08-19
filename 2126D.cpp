// D. This Is the Last Time
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long
#define _for(n) for (i = 0; i < n; i++)
#define _forj(n) for (j = 0; j < n; j++)
#define deb(x) cout << " ." << #x << "=" << x << endl
#define deb2(a, b) cout << " /:" << #a << "=" << a << " , " << #b << "=" << b << endl
#define sortAsc(vect) sort(vect.begin(), vect.end())
#define sortDesc(vect) sort(vect.begin(), vect.end(), greater<int>())

using namespace std;
void solve() {
    int n, k, i, res, l, r, real;
    cin >> n >> k;
    vector<pair<int, int>> c(n);
    _for(n) { // l r real
        cin >> l >> r >> real;
        c[i] = make_pair(l, real);
    }
    sortAsc(c); res = k;
    _for(n) {
        if (c[i].first <= res) {
            if (c[i].second >= res) res = c[i].second;
        }
        else break;
    }
    cout << res << endl;
}

int main() {
    fastread();
    int test;
    cin >> test;
    while (test--){
        solve();
    }
    return 0;
}