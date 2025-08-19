// B. Hamiiid, Haaamid... Hamid?
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long
#define _for(n) for (i = 0; i < n; i++)
#define _forj(n) for (j = 0; j < n; j++)
#define deb(x) cout << " ." << #x << "=" << x << endl
#define deb2(a, b) cout << " /:" << #a << "=" << a << " , " << #b << "=" << b << endl
#define sortAsc(vect) sort(vect.begin(), vect.end())
#define sortDesc(vect) sort(vect.begin(), vect.end(), greater<int>())

using namespace std;
void solve() {
    int n, x, l, r;
    string s;
    cin >> n >> x >> s;

    for (l = x - 1; l >= 0 && s[l] != '#'; l--);
    for (r = x - 1; r < n && s[r] != '#'; r++);
    
    l = min(l + 2, n - x + 1);
    r = min(n - r + 1, x);

    cout << max(l, r) << endl;
}

int main() {
    fastread();
    int test;
    cin >> test;
    while (test--){
        solve();
    }
    return 0;
}