// B. Crafting
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long
#define _for(n) for (i = 0; i < n; i++)

using namespace std;
void solve() {
    int n, i, temp, lack, excess;
    bool flag = true;
    cin >> n;
    vector<int> m(n);
    _for(n) cin >> m[i];
    _for(n) {
        cin >> temp;
        m[i] -= temp;
    }
    sort(m.begin(), m.end());

    if ((m[0] < 0) && (m[1] < m[0]*-1)) {
        flag = false;
    }
    cout << ((flag) ? "YES\n" : "NO\n");

}

int main() {
    int test;
    cin >> test;
    while (test--){
        solve();
    }
    return 0;
}