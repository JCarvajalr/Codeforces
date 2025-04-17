#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    int n, length, i;
    cin>>n;
    cin>>length;

    vector<int> lanterns(n);
    for (i = 0; i < n; i++){
        cin>>lanterns[i];
    }
    sort(lanterns.begin(), lanterns.end());
    long double max = 0;
    int temp;
    for (i = 1; i < n; i++){
        temp = lanterns[i] - lanterns[i-1];
        max = (max < temp) ? temp : max;
    }
    max /= 2;
    //check with corners
    temp = length - lanterns.back();
    temp = (temp < lanterns[0]) ? lanterns[0] : temp;
    max = (max < temp) ? temp : max;
    cout<<fixed<<setprecision(10)<<max;
    
    return 0;
}