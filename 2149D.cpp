// D. A and B
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
ll calc(vector<int> pos) {
    if (pos.size() <= 1) {
        return 0;
    }
    int mid = pos.size() / 2;
    int i;
    ll res = 0;
    _for(pos.size()) {
        if (i == mid) continue;
        res += abs(pos[i] - pos[mid]) - abs(mid - i);
    }
    return res;
}

void solve() {
    int n, i;
    ll res = 0;
    char c;
    cin >> n;
    vector<int> posA, posB;
    _for(n) {
        cin >> c;
        if (c == 'a') posA.push_back(i);
        else posB.push_back(i);
    }
    res = min(calc(posA), calc(posB));
    // deb(res);
    cout << res << endl;
}

int main() {
    fastread();
    int test;
    cin >> test;
    while (test--) solve();
    return 0;
}