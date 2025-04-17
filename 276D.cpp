#include <iostream>
#include <bitset>
using namespace std;

int main() {
    uint64_t l, r, total = 0;
    int msbT, msbL, msbR;
    cin >> l >> r;
    if (l != r) {
        msbL = 63 - __builtin_clzll(l); msbR = 63 - __builtin_clzll(r);
        if (msbL == msbR) {
            msbL--; msbR--;
            while ((l & (1ULL << (msbL))) == (r & (1ULL << (msbR)))) {
                msbL--; msbR--;
            }
            msbT = 63 - ((msbL < msbR) ? msbL : msbR);
        } else {
            msbT = 63 - ((msbL > msbR) ? msbL : msbR);
        }
        total = (msbT == 0) ? 0xFFFFFFFFFFFFFFFF : (0xFFFFFFFFFFFFFFFF >> msbT);
    }
    cout << total;
    return 0;
}