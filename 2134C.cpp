// C. Even Larger
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

int calc(int* a, int* b) {
    if (*a <= *b) return 0;
    int c = *a - *b;
    *a -= c;
    return c;
}

void solve() {
    int n, i, temp;
    cin >> n;
    int a[n];
    _for(n) cin >> a[i];
    ll res = 0;

    for (i = 1; i < n; i += 2) {
        res += calc(&a[i-1], &a[i]);
        if (i+1 < n) {
            res += calc(&a[i+1], &a[i]);
            if (a[i-1] + a[i+1] > a[i]) {
                temp = a[i-1] + a[i+1] - a[i];
                res += temp;
                a[i+1] -= temp;
            }
        }
    }
    cout << res << endl;
}

int main() {
    fastread();
    int test;
    cin >> test;
    while (test--) solve();
    return 0;
}