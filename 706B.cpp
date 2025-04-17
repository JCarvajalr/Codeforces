#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    int n, i, days, money;
    cin>>n;
    vector<int> shops(n);
    for (i = 0; i < n; i++){
        cin>>shops[i];
    }
    cin>>days;
    sort(shops.begin(), shops.end());
    while (days--){
        cin>>money;
        if (money < shops[0]) {
            cout << 0 << endl;
            continue;
        }
        int first = 0, last = n - 1, mid = 0;

        while (first < last && shops[mid] != money){
            mid = (first + last) / 2;
            if (money < shops[mid]){
                last = mid - 1;
            } else if (money > shops[mid]){
                if (last - first == 1){
                    first = mid + 1;
                } 
                first = mid;
            }
        }
        cout<< mid + 1 << endl;
    }
    return 0;
}