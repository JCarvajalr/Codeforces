// A. Wonderful Sticks
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long
#define _for(n) for (i = 0; i < n; i++)

using namespace std;
void solve() {
    int n, i;
    string line;
    cin >> n;
    cin >> line;
    
    deque<int> comb;
    
    int l = 1, r = n;
    for (i = n-2; i >= 0; i--) {
        if (line[i] == '<') {
            comb.push_front(l++);
        } else {
            comb.push_front(r--);
        }
    }
    comb.push_front(l);

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