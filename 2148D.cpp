// D. Destruction of the Dandelion Fields
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
    int n, i, temp;
    ll res = 0;
    cin >> n;
    vector<int> a;
    _for(n) {
        cin >> temp;
        if (temp & 1) a.push_back(temp);
        else res += temp;
    }
    if (a.empty()) {
        cout << "0\n";
        return;
    }
    sortDesc(a);
    for (i = 0; i < ceil(a.size() / 2.0); i++) res += a[i];
    cout << res << endl;

}

int main() {
    fastread();
    int test;
    cin >> test;
    while (test--) solve();
    return 0;
}