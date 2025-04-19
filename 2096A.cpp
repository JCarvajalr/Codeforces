// A. Line Breaks
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long
#define _for(n) for (i = 0; i < n; i++)

using namespace std;
void solve() {
    int n, m, a;
    unsigned int i;
    string line;
    cin >> n;
    cin >> line;

    vector<int> comb;
    comb.push_back(1);
    a = 0;
    for (i = 0; i < line.size(); i++) {
        if (line[i] == '<') {
            comb.insert(comb.begin() + a, i+2);
        } else {
            a = i+1;
            comb.push_back(i+2);
        }
    }
    _for(comb.size()) {
        cout << comb[i] << " ";
    } cout << endl;
    
}

int main() {
    fastread();
    int test;
    cin >> test;
    while (test--) solve();

    return 0;
}