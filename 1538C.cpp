#include <bits/stdc++.h>

using namespace std;
int binarySearch(vector<int> array, int first, int last, int max) {
    int mid = (first + last) / 2;
    while (first <= last && array[mid] != max){
        mid = (first + last) / 2;
        if (max < array[mid]){
            last = mid - 1;
        } else if (max > array[mid]) {
            if (last - first <= 1){
                return (array[mid+1] <= max) ? mid + 1 : mid;
                first = mid + 1;
            } else {
                first = mid;
            }
        }
    }
    return mid;
}

int main() {
    int ntest;
    cin >> ntest;
    while (ntest--){
        int n, l, r, i, sums, lastIndex;
        int temp, a, b;
        cin >> n >> l >> r;
        vector<int> array;
        lastIndex = n - 1;
        for (i = 0; i < n; i++) {
            cin >> temp;
            array.push_back(temp);
        }
        sort(array.begin(), array.end());
        sums = 0;
        for (i = 0; i < n-1; i++){
            if (array[i] > r) break;
            if (i == n-2){
                temp = array[i] + array[i+1];
                if (temp >= l && temp <= r) sums++;
                break;
            }
            if (array[i] >= l) a = (i + 1);
            else {
                a = binarySearch(array, (i + 1), lastIndex, (l - array[i]));
                if (array[a] < (l - array[i])) {
                    if ((a + 1) < n) a++;
                    else continue;
                }
                temp = array[a];
                while ((a - 1 >= 0) && (a - 1 != i) && (array[a-1] == temp)) {
                    a--;
                }
            }
            temp = r - array[i];
            b = binarySearch(array, (i + 1), lastIndex, temp);
            if (array[b] > temp) continue;
            temp = array[b];
            while ((b + 1 < n) && array[b+1] == temp) {
                b++;
            }
            if (lastIndex > b) lastIndex = b;
            // cout << "i(" << i << "):  " << array[i] << "    a: " << a << "     b: " << b << "   =  " << ((b - a) + 1) <<  endl;
            sums += (b - a) + 1;
        }
        cout << sums << endl;
    }
    return 0;
}