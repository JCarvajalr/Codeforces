// C. Those Who Are With Us
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
    int n, m, j, i, max = 0, temp;
    vector<pair<int, int>> c;
    cin >> n >> m;
    // int matrix[n][m];
    _for(n) {
        _forj(m) {
            cin >> temp;
            if (max < temp) {
                max = temp;
                c.clear();
            }
            if (max == temp) {
                c.push_back(make_pair(i, j));
            }
        }
    }
    
    if (c.size() <= 2) {
        // deb(max - 1);
        cout << max - 1 << endl;
        return;
    }

    bool cr = 1, cc = 1, change = 1;
    pair<int, int> cor1, cor2;
    cor1 = cor2 = make_pair(c[0].first, c[0].second);
    
    for (i = 1; i < (int)c.size(); i++) {
        if (!cr && !cc) {
            if (c[i].first != cor1.first && c[i].second != cor1.second) {
                i = 0; break;
            }
        }

        if (c[i].first == cor1.first && c[i].second != cor1.second) cr = 0;
        else if (c[i].second == cor1.second) cc = 0;
        else if (change) {
            if (cr) {
                if (!cc) {
                    cor1 = make_pair(c[i].first, cor1.second);
                    cr = 0;
                } else {
                    cor2 = make_pair(c[i].first, cor1.second);
                    cor1 = make_pair(cor1.first, c[i].second);
                }
            } else if (cc) {
                cor1 = make_pair(cor1.first, c[i].second);
                cc = 0;
            }
            change = 0;
        } else if (cc && cr && (c[i].first == cor2.first || c[i].second == cor2.second)) {
            cor1 = cor2;
            cr = cc = 0;
        } else { i = 0; break; }
    }

    if (i == (int)c.size()) max--;
    // deb(max);
    cout << max << endl;
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