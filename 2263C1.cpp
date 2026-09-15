// C1. Floor of MEX (Easy Version)
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL))
#define _for(n) for (i = 0; i < n; i++)
using namespace std;

void solve() {
    int n, i, x, temp;
    cin >> n;
    vector<int> ar(n, 0);
    for (i = 1; i <= n; i++) {
        cin >> x;
        temp = i * x;
        if (temp < n) {
            ar[temp]++;
            temp = i * (x+1);
            if (temp < n) ar[temp]--;
        }
    }
    for (i = 1; i < n; i++) ar[i] = ar[i] + ar[i-1];

    vector<int> ans;
    _for(n) if (!ar[i]) ans.push_back(i);

    cout << ans.size() << endl;
    _for(ans.size()) cout << ans[i] << " ";
    cout << endl;
}

int main() {
    fastread();
    int test;
    cin >> test;
    while (test--) solve();
    return 0;
}