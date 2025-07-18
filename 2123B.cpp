// B. Tournament
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
    int n, j, k, i, temp, max = 0;

    cin >> n >> j >> k;
    int players[n];

    _for(n) {
        cin >> players[i];
        max = (max < players[i]) ? players[i] : max;
    }
    cout << ((k > 1 || max == players[j-1]) ? "YES" : "NO") << endl;
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