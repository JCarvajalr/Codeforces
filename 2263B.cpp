// B. Min Matrices
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

void solve() {
    int n, k, i, j, temp;
    cin >> n >> k;

    if (k < n || k == (n*2)) {
        cout << -1 << endl;
        return;
    }

    int mat[n][n] = {};
    k = (k - n) + 1;
    temp = 1;
    _forj(k) mat[0][j] = temp++;

    if (k == n) j = 0;
    for(i=1; i<n; i++) {
        mat[i][j++] = temp++;
        if (j >= n) j = 0; 
    }

    _for(n) {
        _forj(n) {
            if (mat[i][j] == 0) mat[i][j] = temp++;
        }
    }

    _for(n) {
        _forj(n) cout << mat[i][j] << " ";
        cout << endl;
    }

}

int main() {
    fastread();
    int test;
    cin >> test;
    while (test--) solve();
    return 0;
}