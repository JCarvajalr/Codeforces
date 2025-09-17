// B. Cake Collection
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
    int n, i; ll m;
    cin >> n >> m;
    vector<int> a(n);
    _for(n) cin >> a[i];
    sortDesc(a);
    ll res = 0;
    for (i = 0; i < n && m > 0; i++, m--) {
        res += a[i] * m;
    }
    cout << res << endl;
}

int main() {
    int test;
    cin >> test;
    while (test--){
        solve();
    }
    return 0;
}