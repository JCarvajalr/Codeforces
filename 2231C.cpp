// C. Chipmunk Theo and Equality
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL))
#define ll long long
#define _for(n) for (i = 0; i < n; i++)
#define sortAsc(vect) sort(vect.begin(), vect.end())
using namespace std;

void solve() {
    int n, i, temp, t;
    cin >> n;
    vector<int> ar(n);
    map<int, int> ops, nums;
    _for(n) cin >> ar[i];
    sortAsc(ar);
    _for(n) {
        temp = ar[i];
        nums[temp]++;
        t = 0;
        ops[temp] += t;
        if (temp == 1) {
            ops[2]++; nums[2]++;
            continue;
        }
        while (temp != 1) {
            if (temp % 2 == 0) temp /= 2;
            else temp++;
            t++;
            if (i == 0 || nums.count(temp)) {
                ops[temp] += t;
                nums[temp]++;
            }
        }
    }
    int res = INT_MAX;

    for (auto p: ops) {
        if (n <= nums[p.first]) {
            res = min(res, p.second);
        }
    }
    cout << res << endl;

}

int main() {
    fastread();
    int test;
    cin >> test;
    while (test--) solve();
    return 0;
}