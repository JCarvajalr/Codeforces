// A. Recycling Center
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL))
#define ll long long
#define _for(n) for (i = 0; i < n; i++)
#define _forj(n) for (j = 0; j < n; j++)
#define deb(x) cout << " ." << #x << "=" << x << endl
#define deb2(a, b) cout << " /:" << #a << "=" << a << " , " << #b << "=" << b << endl
#define sortAsc(vect) sort(vect.begin(), vect.end())
#define sortDesc(vect) sort(vect.begin(), vect.end(), greater<int>())

using namespace std;
void solve() {
    int n, i, c, res = 0, m = 1;

    cin >> n >> c;
    vector<int> a(n);
    _for(n) cin >> a[i];
    sortDesc(a);
    _for(n) {
        // deb(m);
        if (a[i]*m > c) res++;
        else m = (m == 1 ? 2 : m * 2);
    }
    cout << res << endl;
}

int main() {
    fastread();
    int test = 1;
    cin >> test;
    while (test--){
        solve();
    }
    return 0;
}