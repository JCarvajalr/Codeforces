#include <bits/stdc++.h>
 
using namespace std;
int main() {
    int testcases, n, i, temp, excess, lack;
    cin >> testcases;
    while (testcases--){
        cin >> n;
        vector<int> m1(n);
        vector<int> m2(n);
 
        for (i = 0; i < n; i++) cin >> m1[i];
        for (i = 0; i < n; i++) cin >> m2[i];
        
        // sort(m1.begin(), m1.end(), greater<int>());
        // sort(m2.begin(), m2.end(), greater<int>());
        excess = 0;
        lack = 0;
        for (i = 0; i < n; i++){
            temp = (m1[i] + lack) - m2[i];
            // cout << "m1:" << m1[i] << "   m2:" << m2[i] << "  =  " << temp << endl;
            // cout << " excess: " << excess << endl;
            if (temp < 0) {
                if ((temp + excess) >= 0) {
                    excess += temp;
                    lack = temp;
                } else {
                    excess = -1;
                    break;
                }
            } else if (temp < excess || excess == 0) excess = temp;
            
        }
        // cout << " x  " << excess << "   ";
        cout << ((excess > -1) ? "YES\n" : "NO\n");
    }
    return 0;
}