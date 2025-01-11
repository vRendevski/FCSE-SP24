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
    int rowAns = 0;
    for(int row = 0; row < n; row++){
        int rowCnt = 0;
        for(int col = 0; col < m; col++){
            if(mat[row][col] == 0 && rowCnt >= 3) break;
            else if(mat[row][col] == 1) rowCnt++;
            else rowCnt = 0;
        }
        if(rowCnt >= 3) rowAns++;
    }
    int colAns = 0;
    for(int col = 0; col < m; col++){
        int colCnt = 0;
        for(int row = 0; row < n; row++){
            if(mat[row][col] == 0 && colCnt >= 3) break;
            else if(mat[row][col] == 1) colCnt++;
            else colCnt = 0;
        }
        if(colCnt >= 3) colAns++;
    }
    cout << rowAns+colAns << endl;
}
