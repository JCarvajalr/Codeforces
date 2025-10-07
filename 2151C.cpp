// C. Incremental Stay
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL))
#define ll long long
#define _for(n) for (i = 0; i < n; i++)
#define _forj(n) for (j = 0; j < n; j++)
#define deb(x) cout << " ." << #x << "=" << x << endl
#define deb2(a, b) cout << "  /:" << #a << "=" << a << " , " << #b << "=" << b << endl
#define debArr(array) cout << "  /:" << #array << "[] = "; for (int I = 0; I < (int) array.size(); I++) cout << array[I] << " "; cout << endl;
#define sortAsc(vect) sort(vect.begin(), vect.end())
#define sortDesc(vect) sort(vect.begin(), vect.end(), greater<int>())
// int maxInt = INT_MAX;

using namespace std;
void solve() {
    int n, i;
    cin >> n;
    vector<ll> a(n*2);
    _for(a.size()) {
        cin >> a[i];
    }
    vector<ll> ans(n+1, 0);

    for (i = 0; i < (int) a.size(); i+=2) {
        ans[0] += a[i+1] - a[i];
        ans[1] += a[i] - a[i+1];
    }
    ans[1] += 2 * (a.back() - a[0]);

    for (i = 2; i < n; i++) {
        ans[i] = ans[i-2] + 2 * (a[a.size() - i] - a[i-1]);
    }

    _for(n) cout << ans[i] << " "; cout << endl;
}

int main() {
    fastread();
    int test;
    cin >> test;
    while (test--) solve();
    return 0;
}