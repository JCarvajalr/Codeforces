// B. Fashionable Array
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL))
#define ll long long
#define _for(n) for (i = 0; i < n; i++)
#define _forj(n) for (j = 0; j < n; j++)
#define deb(x) cout << " ." << #x << "=" << x << endl
#define deb2(a, b) cout << "  /:" << #a << "=" << a << " , " << #b << "=" << b << endl
#define debArr(array) cout << "  /:" << #array << "[] = "; for (int I = 0; I < (int) array.size(); I++) cout << array[I] << " "; cout << endl;
using namespace std;

void solve() {
    int n, i, temp, m = 0;
    cin >> n;
    vector<int> sp(102, 0);
    _for(n) {
        cin >> temp;
        sp[temp]++;
        m = max(temp, m);
    }
    vector<int> res(n); int j = 0;
    int remaining = n, maxmode = sp[m];

    for (i = m; remaining > 0; i--) {
        if (i == 0) {
            i = m;
            for (int I = m; I > 0; I--) {
                if (sp[I] > 0) {
                    maxmode = sp[I];
                    break;
                }
            }
        }
        if (sp[i] == 0) continue;

        temp = min(sp[i], maxmode);
        sp[i] -= temp;
        remaining -= temp;
        for(int I = 0; I < temp; I++) res[j++] = i;
    }
    // debArr(res);
    _for(n) cout << res[i] << " ";
    cout << endl;

}

int main() {
    fastread();
    int test;
    cin >> test;
    while (test--) solve();
    return 0;
}