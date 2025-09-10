// C1. Skibidus and Fanum Tax (easy version)
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
    int n, m, i, temp, b;
    cin >> n >> m;
    vector<int> a(n);
    _for(n) cin >> a[i];
    cin >> b;
    bool flag = 1;
    a[0] = min(a[0], b - a[0]);
    for (i = 1; i < n && flag; i++) {
        temp = b - a[i];
        if (temp >= a[i-1]) {
            if (a[i] < a[i-1] || temp < a[i]) {
                a[i] = temp;
                continue;
            }
        }
        if (a[i] < a[i-1]) flag = 0;
    }
    cout << (flag ? "YES" : "NO") << endl;

}

int main() {
    fastread();
    int test;
    cin >> test;
    while (test--) solve();
    return 0;
}