#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int mat[100][100];
    for(int row = 0; row < n; row++){
        int cnt = 0;
        for(int col = 0; col < m; col++){
            cin >> mat[row][col];
            if(mat[row][col] % 2 == (row+col) % 2){
                cnt++;
            }
        }
        cout << row << ": " << cnt << endl;
    }

}
