#include <iostream>
#include <vector>
#include <algorithm>
//#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int ntest, i;
    cin >> ntest;
    while (ntest--){
        ll n, maxSum = 0, sum;
        cin >> n;
        vector<ll> array(n), tempArray;
        for (i = 0; i < n; i++){
            cin >> array[i];
            maxSum += array[i];
        }
        if (n == 1){
            cout << array[0] << endl;
            continue;
        }
        for (i = 0; i < n-1; i++){
            if (array[0] > array.back()){
                reverse(array.begin(), array.end());
            }
            tempArray.clear();
            for (int j = 0; j < array.size() - 1; j++){
                tempArray.push_back(array[j+1] - array[j]);
            }
            array = tempArray;
            sum = 0;
            for (ll num : array){
                sum += num;
            }
            if (sum > maxSum) maxSum = sum;
        }
        cout << maxSum << endl;
    }
    return 0;
}