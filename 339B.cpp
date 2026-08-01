// B. Xenia and Ringroad
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL))
#define ll long long
#define _for(n) for (i = 0; i < n; i++)
using namespace std;
#define deb2(a, b) cout << "  /:" << #a << "=" << a << " , " << #b << "=" << b << endl
int main() {
    fastread();
    
    int n, m, i;
    ll res, cycles = 0;
    cin >> n >> m;
    int ar[m];
    _for(m) cin >> ar[i];
    _for(m-1) {
        if (ar[i] > ar[i+1]) {
            cycles++;
        }
    }
    res = (cycles * n) - 1;
    res += ar[m-1];
    cout << res << endl;
    
    return 0;
}