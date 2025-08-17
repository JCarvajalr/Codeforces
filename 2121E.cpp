// E. Sponsor of Your Problems
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL))
#define ll long long
#define _for(n) for (i = 0; i < n; i++)
#define _forj(n) for (j = 0; j < n; j++)
#define deb(x) cout << " ." << #x << "=" << x << endl
#define deb2(a, b) cout << " /:" << #a << "=" << a << " , " << #b << "=" << b << endl
#define sortAsc(vect) sort(vect.begin(), vect.end())
#define sortDesc(vect) sort(vect.begin(), vect.end(), greater<int>())

using namespace std;
void solve() {
    int l, r;
    cin >> l >> r;
    int res = 0, t;
    while (l) {
        t = r - l;
        if (t == 0) res += 2;
        else if (t == 1) res++;        
        l /= 10, r /= 10;
    }
    cout << res << endl;
}

int main() {
    fastread();
    int test = 1;
    cin >> test;
    while (test--){
        solve();
    }
    return 0;
}