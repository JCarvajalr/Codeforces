// E. Adjacent XOR
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
    int n, i;
    cin >> n;
    int a[n], b[n];
    _for(n) cin >> a[i];
    _for(n) cin >> b[i];
    
    bool flag = true, equal = true;
    while (flag) {
        flag = false;
        _for(n) {
            if (a[i] != b[i]) {
                if ((i+1 < n) && (a[i] ^ a[i+1]) == b[i]) {
                    a[i] ^= a[i+1]; 
                    equal = flag = true;
                    continue;
                }
                equal = false;
            }
        }
    }

    cout << (equal ? "YES\n" : "NO\n");

}

int main() {
    fastread();
    int test;
    cin >> test;
    while (test--) solve();
    return 0;
}