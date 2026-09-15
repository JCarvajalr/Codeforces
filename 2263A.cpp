// A. Min Max Game
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL))
#define ll long long
#define _for(n) for (i = 0; i < n; i++)
#define _forj(n) for (j = 0; j < n; j++)
using namespace std;

void solve() {
    int n, i, temp;
    cin >> n;
    int z = 0, o = 0;
    _for(n) {
        cin >> temp;
        if (temp == 0) z++;
        else o++;
    }

    cout << (o >= z ? "Bessie" : "Elsie") << endl;

}

int main() {
    fastread();
    int test;
    cin >> test;
    while (test--) solve();
    return 0;
}