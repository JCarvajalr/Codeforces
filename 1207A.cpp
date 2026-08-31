// A. There Are Two Types Of Burgers
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL))
#define ll long long
#define deb(x) cout << " ." << #x << "=" << x << endl
using namespace std;

void solve() {
    int res = 0, b, p, f, h, c;
    cin >> b >> p >> f >> h >> c;
    b /= 2;
    if (h < c) swap(p, f), swap(h, c);
    res += (min(b, p) * h) + (min(f, b - min(b, p)) * c);
    
    cout << res << endl;
}

int main() {
    fastread();
    int test;
    cin >> test;
    while (test--) solve();
    return 0;
}