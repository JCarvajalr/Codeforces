// D. Find the Different Ones!
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
    int n, i, j, q, l, r;
    cin >> n;
    vector<int> a(n+1), index(n+1);
    vector<int> groups;
    
    j = 1; r = 0;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] != a[j]) {
            groups.push_back(j);
            j = i;
            r++;
        }
        index[i] = r;
    }
    groups.push_back(j);
    cin >> q;
    int res;
    _for(q) {
        cin >> l >> r;
        res = -1;
        for (j = index[l]+1; j < (int) groups.size(); j++) {
            if (groups[j] > r) break;
            if (groups[j] >= l) {
                res = groups[j];
                break;
            }
        }
        if (res > 0) cout << l << " " << res << endl;
        else cout << "-1 -1\n";
    }
}

int main() {
    fastread();
    int test;
    cin >> test;
    while (test--) solve();
    return 0;
}