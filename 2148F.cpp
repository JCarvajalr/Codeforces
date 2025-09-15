// F. Gravity Falls
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
    int n, i, j, temp, maxLen = 0;
    cin >> n;
    vector<vector<int>> a(n);
    _for(n) {
        cin >> temp;
        maxLen = max(temp, maxLen);
        int s;
        _forj(temp) {
            cin >> s;
            a[i].push_back(s);
        }
    }
    vector<int> res;
    temp = 0;
    while (temp < maxLen) {
        int minIndex = -1;
        for (i = 0; i < n; i++) {
            if ((int) a[i].size() <= temp) continue;
            if (minIndex == -1 || lexicographical_compare(a[i].begin()+temp,a[i].end(),a[minIndex].begin()+temp,a[minIndex].end())) minIndex = i;
        }
        for (i = temp; i < (int) a[minIndex].size(); i++) {
            res.push_back(a[minIndex][i]);
        }
        temp = res.size();
    }
    _for((int) res.size()) cout << res[i] << " ";
    cout << endl;
}

int main() {
    fastread();
    int test;
    cin >> test;
    while (test--) solve();
    return 0;
}