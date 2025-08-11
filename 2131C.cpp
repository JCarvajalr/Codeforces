// C. Make it Equal
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL))
#define ll long long
#define _for(n) for (i = 0; i < n; i++)
#define _forj(n) for (j = 0; j < n; j++)
#define deb(x) cout << " ." << #x << "=" << x << endl
#define deb2(a, b) cout << " /:" << #a << "=" << a << " , " << #b << "=" << b << endl
#define sortAsc(vect) sort(vect.begin(), vect.end())
#define sortDesc(vect) sort(vect.begin(), vect.end(), greater<int>())
// int maxInt = INT_MAX;

using namespace std;
void solve() {
    int n, i;
    int k;
    cin >> n >> k;
    vector<int> a(n), b(n);

    _for(n) {
        cin >> a[i];
        a[i] = min(a[i] % k, k - a[i] % k);
    }
    _for(n) {
        cin >> b[i];
        b[i] = min(b[i] % k, k - b[i] % k);
    }
    sortAsc(a), sortAsc(b);

    cout << (a == b ? "YES\n" : "NO\n");

}

int main() {
    fastread();
    int test;
    cin >> test;
    while (test--) solve();
    return 0;
}