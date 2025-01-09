#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int m = n*2;
    int mat[50][100];
    for(int row = 0; row < n; row++){
        for(int col = 0; col < m; col++){
            cin >> mat[row][col];
        }
    }
    for(int row = 0; row < n; row++){
        for(int col = 0; col < n; col++){
            cout << mat[row][col] << " ";
        }
        cout << endl;
    }
    for(int row = 0; row < n; row++){
        for(int col = n; col < n*2; col++){
            cout << mat[row][col] << " ";
        }
        cout << endl;
    }
}
