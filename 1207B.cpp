// B. Square Filling
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

using namespace std;
int main(){
    fastread();
    int rows, cols, r, c, ans = 0;
    string line = "\n";
    cin >> rows >> cols;
    int matrix[rows][cols];
    int m2[rows][cols];

    for (r = 0; r < rows; r++){
        for (c = 0; c < cols; c++) {
            cin >> matrix[r][c];
            m2[r][c] = 0;
        }
    }
    int temp;
    for (r = 0; r < rows-1; r++) {
        for (c = 0; c < cols-1; c++) {
            if (matrix[r][c] == 1) {
                temp = matrix[r+1][c] + matrix[r][c+1] + matrix[r+1][c+1];
                if (temp == 3) {
                    ans++;
                    line += to_string(r+1) + " " + to_string(c+1) + "\n";
                    m2[r+1][c+1] = 1; m2[r][c+1] = 1; m2[r+1][c] = 1; m2[r][c] = 1;
                }
            }
        }
    }

    for (r = 0; r < rows; r++){
        for (c = 0; c < cols; c++){
            if (m2[r][c] != matrix[r][c]) {
                cout << -1;
                return 0;
            }
        }
    }
    cout << ans;

    if (ans > 0) {
        cout << line;
    }

    return 0;
}