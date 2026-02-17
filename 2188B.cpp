// B. Seats
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL))
#define ll long long
#define _for(n) for (i = 0; i < n; i++)
#define deb(x) cout << " ." << #x << "=" << x << endl
#define deb2(a, b) cout << "  /:" << #a << "=" << a << " , " << #b << "=" << b << endl
using namespace std;

void solve() {
    int n, i, res = 0, temp = 0, t = 1;
    string s;
    cin >> n >> s;
    _for(n) {
        if (s[i] == '1') {
            t++; res++; temp--; 
        }
        else temp++;
        if (temp >= 1 && (t == 2 || i+1 == n)) {
            res += temp / 3 + (temp%3!=0);
            temp = -1;
            t = 1;
        }
        if (t == 2) {
            t = 1; temp = -1;
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