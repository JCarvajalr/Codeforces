#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long
#define _for(n) for (i = 0; i < n; i++)
 
using namespace std;
void solve() {
    int a, temp, i, total = 0;
    
    cin >> a;
    _for(3) {
        cin >> temp;
        if (temp > a) {
            total++;
        }
    }
    cout << total << endl;
}
 
int main() {
    fastread();
    int test;
    cin >> test;
    while (test--) solve();
    return 0;
}
