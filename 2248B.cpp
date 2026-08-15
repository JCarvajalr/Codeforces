// B. Merge to Match
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
// int maxInt = INT_MAX;
using namespace std;

void solve() {
    int n, m, i;
    cin >> n >> m;
    vector<int> a(n), b(m);
    _for(n) cin >> a[i];
    _for(m) cin >> b[i];

    sortAsc(a);
    sortAsc(b);

    int bi;
    int ups = 0, down = 0;
    for (i = 0, bi = 0; bi < m && i < n; i++) {
        if (b[bi] >= a[i]) {
            bi++; down++; a[i] = -1;
        }
    }
    for (i = n-1, bi = m-1; bi >= 0 && i >= 0; i--) {
        if (b[bi] <= a[i]) {
            bi--; ups++;
        }
    }

    if (ups == m && down == m) cout << "YES";
    else cout << "NO";
    cout << endl;
}

int main() {
    fastread();
    int test;
    cin >> test;
    while (test--) solve();
    return 0;
}