// D. Arboris Contractio
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

const int N = 2e5 + 5;
int x[N], y[N], c[N], leaf[N];

void solve() {
    int n, i, ans = 0, temp = 0;
    cin >> n;

    for (i = 1; i < n; i++) {
        cin >> x[i] >> y[i];
        c[x[i]]++; c[y[i]]++;
    }
    for (i = 1; i < n; i++) {
        if (c[x[i]] == 1 && c[y[i]] != 1) leaf[y[i]]++;
        if (c[y[i]] == 1 && c[x[i]] != 1) leaf[x[i]]++;
    }
    for (i = 1; i <= n; i++) {
        temp = max(temp, leaf[i]);
        ans += leaf[i];
        c[i] = leaf[i] = 0;
    }
    cout << (ans - temp) << endl;
}

int main() {
    fastread();
    int test = 1;
    cin >> test;
    while (test--) solve();
    return 0;
}