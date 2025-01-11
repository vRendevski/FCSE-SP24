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
    int x, y;
    cin >> x >> y;
    int sumFirst = 0;
    for(int row = 0; row < x; row++){
        for(int col = y; col < m; col++){
            sumFirst += mat[row][col];
        }
    }
    int sumSecond = 0;
    for(int row = 0; row < x; row++){
        for(int col = 0; col < y; col++){
            sumSecond += mat[row][col];
        }
    }
    int sumThird = 0;
    for(int row = x; row < n; row++){
        for(int col = 0; col < y; col++){
            sumThird += mat[row][col];
        }
    }
    int sumFourth = 0;
    for(int row = x; row < n; row++){
        for(int col = y; col < m; col++){
            sumFourth += mat[row][col];
        }
    }
    cout << sumFirst << " " << sumSecond << " " << sumThird << " " << sumFourth << endl;
}
