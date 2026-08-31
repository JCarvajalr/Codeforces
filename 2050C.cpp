// C. Uninteresting Number
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL))
#define ll long long
#define _for(n) for (i = 0; i < n; i++)
#define _forj(n) for (j = 0; j < n; j++)
using namespace std;

void solve() {
    int i, j, sum = 0, n2 = 0, n3 = 0;
    string s;
    cin >> s;
    _for(s.size()) {
        sum += s[i] - 48;
        n2 += (s[i] == '2'), n3 += (s[i] == '3');
    }
    for (i = 0; i <= n2; i++) {
        for (j = 0; j <= n3; j++) {
            if ((sum + (i*2) + (j*6)) % 9 == 0) {
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
}

int main() {
    fastread();
    int test;
    cin >> test;
    while (test--) solve();
    return 0;
}