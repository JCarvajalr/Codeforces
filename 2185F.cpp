// F. BattleCows
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL))
#define ll long long
#define deb(x) cout << " ." << #x << "=" << x << endl
#define deb2(a, b) cout << "  /:" << #a << "=" << a << " , " << #b << "=" << b << endl
#define debArr(array) cout << "  []:" << #array << " = "; for (int I = 0; I < (int) array.size(); I++) cout << array[I] << " "; cout << endl;
using namespace std;

void solve() {
    int n, q, i;
    cin >> n >> q;
    vector<int> ar(1<<(n+1));

    for(i = (1<<n); i < (int) ar.size(); i++) cin >> ar[i];
    for(i = (1<<n) - 1; i > 0; i--) ar[i] = ar[i*2] ^ ar[i*2 + 1];

    int b, c, above, incr;
    while (q--) {
        cin >> b >> c;
        above = 0; incr = 1;
        b += (1<<n) - 1;

        while (b > 1) {
            if (c < ar[b^1] || (c == ar[b^1] && b%2 == 1)) {
                above += incr;
            }
            c ^= ar[b^1];
            b /= 2;
            incr *= 2;
        }
        // deb(above);
        cout << above << endl;
    }

}

int main() {
    fastread();
    int test;
    cin >> test;
    while (test--) solve();
    return 0;
}