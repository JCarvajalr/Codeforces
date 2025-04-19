// A. Line Breaks
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long
#define _for(n) for (i = 0; i < n; i++)

using namespace std;
void solve() {
    int n, a, i;
    
    string line;
    cin >> n;
    cin >> line;
    
    deque<int> comb;
    deque<int> range;
    _for(n) {
        range.push_back(i+1);
    }
    a = 0;
    
    for (i = n-2; i >= 0; i--) {
        if (line[i] == '<') {
            comb.push_front(range.front());
            range.pop_front();
        } else {
            comb.push_front(range.back());
            range.pop_back();
        }
    }
    comb.push_front(range.front());

    for(int item: comb) {
        cout << item << " ";
    } cout << endl;
    
}

int main() {
    fastread();
    int test;
    cin >> test;
    while (test--) solve();

    return 0;
}