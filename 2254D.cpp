// D. Silhouette
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL))
#define ll long long
#define _for(n) for (i = 0; i < n; i++)
#define _forj(n) for (j = 0; j < n; j++)
#define deb(x) cout << " ." << #x << "=" << x << endl
#define deb2(a, b) cout << "  /:" << #a << "=" << a << " , " << #b << "=" << b << endl
#define debArr(array) cout << "  /:" << #array << "[] = "; for (int I = 0; I < (int) array.size(); I++) cout << array[I] << " "; cout << endl;
#define sortAsc(vect) sort(vect.begin(), vect.end())
#define sortDesc(vect) sort(vect.begin(), vect.end(), greater<int>())
using namespace std;

unordered_map<long long, long long> val;

void solve() {
    int n, i;
    cin >> n;
    vector<ll> ar(n), sor;
    ll lastnu = 0, total = 0, temp;
    _for(n) {
        cin >> ar[i];
    }
    sor = ar; sortAsc(sor);
    if (sor[0] != 0) {
        cout << -1 << "\n"; return;
    }
    int lasti = 0, cnt;
    for(i = 0; i < n; i++) {
        if (sor[i] != sor[lasti]) {
            cnt = i - lasti;
            temp = (sor[i] - total) / cnt;
            if (temp <= lastnu || (sor[i] - total) % cnt != 0) {
                cout << -1 << "\n"; return;
            }
            lastnu = temp;
            val[sor[lasti]] = lastnu;
            lasti = i;
            total += lastnu * cnt;
        }
        if (i == n-1) val[sor[i]] = lastnu + 1;
    }
    _for(n) {
        cout << val[ar[i]] << " ";
    }
    cout << "\n";
}

int main() {
    fastread();
    int test;
    cin >> test;
    while (test--) solve();
    return 0;
}