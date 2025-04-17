// A. Cakeminator
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long
#define _for(n) for (i = 0; i < n; i++)

using namespace std;
int ranges[1010];

int main() {
    fastread();
    int r, c, i, a, b, total;
    string line, temp;
    vector<array<int, 2>> berrys;
    set<string> nones;
    cin >> r >> c;
    
    total = r * c;
    for (a = 0; a < r; a++) {
        cin >> line;
        for (b = 0; b < c; b++) {
            if (line[b] == 'S') {
                berrys.push_back({a, b});
            }
        }
    }
    for (a = 0; a < berrys.size(); a++) {
        for (b = 0; b < berrys.size(); b++) {
            temp = to_string(berrys[a][0]) + "." + to_string(berrys[b][1]);
            nones.insert(temp);
        }
    }
    total -= nones.size();
    cout << total;
    // for (const auto& nn : nones) {
    //     cout << nn << endl;
    // }
    return 0;
}