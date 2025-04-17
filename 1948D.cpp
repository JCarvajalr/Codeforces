#include <bits/stdc++.h>

using namespace std;
int main() {
    unsigned int test, a, b;
    string word;
    cin >> test;
    while (test--){
        cin >> word;
        unsigned int maxTan = 0, temp1, temp2, coincidences;
        for (a = 0; a < word.length() - 1; a++){
            if (maxTan == word.length()/2) break;
            for (b = a + 1; b < word.length(); b++){
                if (word[a] == word[b] || word[a] == '?' || word[b] == '?'){
                    temp1 = a; temp2 = b;
                    coincidences = 0;
                    while (temp1 != b && temp2 < word.length() && (word[temp1] == word[temp2] || word[temp1] == '?' || word[temp2] == '?')){
                        coincidences++;
                        temp1++; temp2++;
                    }
                    if (b - temp1 < 1) {
                        if (coincidences > maxTan) maxTan = coincidences;
                    }
                }
            }
        }
        cout << maxTan*2 << endl;
    }
    return 0;
}