// B. Wonderful Gloves
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long
#define _for(n) for (i = 0; i < n; i++)

using namespace std;
void solve() {
    int n, i, k;
    cin >> n >> k;
    ll sum = 0, temp;
    vector<ll> l(n); vector<ll> r(n); vector<ll> mins;
    _for(n) cin >> l[i];
    _for(n) {
        cin >> r[i];
        if (l[i] > r[i]) {
            sum += l[i]; mins.push_back(r[i]);
        } else {
            sum += r[i]; mins.push_back(l[i]);
        }
    }
    sort(mins.rbegin(), mins.rend());
    _for(k-1) {
        sum += mins[i];
    }
    cout << (sum+1) << endl;
}

int main() {
    fastread();
    int test;
    cin >> test;
    while (test--) solve();

    return 0;
}