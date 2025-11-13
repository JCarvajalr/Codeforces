// B. Your Name
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL))
#define sortAsc(vect) sort(vect.begin(), vect.end())

using namespace std;
void solve() {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    sortAsc(a); sortAsc(b);
    if (a == b) cout << "YES";
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