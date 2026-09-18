// C. Risky Tower
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL))
#define ll long long
#define _for(n) for (i = 0; i < n; i++)
#define _forj(n) for (j = 0; j < n; j++)
#define deb(x) cout << " ." << #x << "=" << x << endl
#define deb2(a, b) cout << "  /:" << #a << "=" << a << " , " << #b << "=" << b << endl
#define sortDesc(vect) sort(vect.begin(), vect.end(), greater<int>())
using namespace std;

void solve() {
    int n, m, i, j, temp;
    cin >> n >> m;
    vector<int> st(n);
    _for(n) cin >> st[i];
    int twr[n][m];
    _for(n) _forj(m) cin >> twr[i][j];
    
    vector<int> vl;
    int ans = m, I = 0;
    for (i = n-1; i >= 0; i--) {
        _forj(m) {
            vl.push_back(twr[i][j]);
        }
        sortDesc(vl);
        if (vl.size() > m) vl.resize(m);

        temp = 0;
        _forj(m) {
            temp += vl[j];
            if (temp >= st[i]) break;
        }
        if (j+1 < ans) ans = j+1;
    }
    cout << ans << endl;
}

int main() {
    fastread();
    int test;
    cin >> test;
    while (test--) solve();
    return 0;
}