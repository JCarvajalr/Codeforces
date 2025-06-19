// D. Creating a Schedule
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
    int n, m, i, j, temp;
    vector<int> rooms;

    cin >> n >> m;
    _for(m) {
        cin >> temp;
        rooms.push_back(temp);
    }
    sortAsc(rooms);
    _for(n) {
        _forj(6) {
            if ((i+j) & 1) {
                cout << rooms[(m - i/2) - 1] << " ";
            } else {
                cout << rooms[i/2] << " ";
            }
        } cout << endl;
    }

}

int main() {
    int test;
    cin >> test;
    while (test--){
        solve();
    }
    return 0;
}