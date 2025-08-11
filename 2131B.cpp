// B. Alternating Series
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
    int n, temp;
    cin >> n;

    if (n == 2) cout << "-1 2" << endl;
    else {
        for (int i = 1; i <= n; i++) {
            if (i % 2 != 0) {
                cout << "-1 ";
            }
            else {
                if (i == n) cout << "2 ";
                else cout << "3 ";
            }
            
        } cout << endl;
    }

}

int main() {
    fastread();
    int test;
    cin >> test;
    while (test--) solve();
    return 0;
}