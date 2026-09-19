// A. Painting With Two Colors
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL))
using namespace std;

void solve() {
    int n, a, b, temp;
    cin >> n >> a >> b;
    temp = (n%2 == 1);

    cout << ((b%2 == temp && (a%2 == temp || b >= a)) ? "YES\n" : "NO\n");
}

int main() {
    fastread();
    int test;
    cin >> test;
    while (test--) solve();
    return 0;
}