#include <bits/stdc++.h>

using namespace std;

int main(){
    int x, n, m;
    cin >> x >> n >> m;
    int mat[100][100];
    for(int row = 0; row < n; row++){
        int sum = 0;
        for(int col = 0; col < m; col++){
            cin >> mat[row][col];
            sum += mat[row][col];
        }
        for(int col = 0; col < m; col++){
            if(sum > x) cout << 1 << " ";
            else if(sum < x) cout << -1 << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }
}
