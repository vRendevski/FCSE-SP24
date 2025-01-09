#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int mat[100][100];
    for(int row = 0; row < n; row++){
        for(int col = 0; col < m; col++){
            cin >> mat[row][col];
        }
    }
    for(int row = 0; row < n; row++){
        int mid = m/2;
        int fHalfSum = 0, sHalfSum = 0;
        for(int col = 0; col < ((m % 2 == 0) ? mid : mid+1); col++){
            fHalfSum += mat[row][col];
        }
        for(int col = mid; col < m; col++){
            sHalfSum += mat[row][col];
        }
        int diff = abs(sHalfSum-fHalfSum);
        if(m % 2 == 0) mat[row][mid-1] = mat[row][mid] = diff;
        else mat[row][mid] = diff;
    }
    for(int row = 0; row < n; row++){
        for(int col = 0; col < m; col++){
            cout << mat[row][col] << " ";
        }
        cout << endl;
    }
}
