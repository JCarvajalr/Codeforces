#include <bits/stdc++.h>
#include <iostream>

using namespace std;
int main() {
    int test;
    cin >> test;
    while (test--){
        long long num, tempNum, count, maxCount = INT_MAX, top;
        string line, increment = "";
        bool flag;
        cin >> num;
        top = to_string(num).size();
        for (int a = 0; a < top; a++){
            increment += "9";
            count = 0;
            tempNum = num;
            flag = true;
            while (true){
                line = to_string(tempNum);
                for (unsigned int i = 0; i < line.size(); i++){
                    if (line[i] == '7'){
                        flag = false;
                        break;
                    }
                }
                if (flag) {
                    count++;
                    tempNum += stoll(increment);
                } else break;
            }
            if (count < maxCount) maxCount = count;
        }
        cout << maxCount << endl;
    }
    return 0;
}