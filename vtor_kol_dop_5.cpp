#include <bits/stdc++.h>

using namespace std;

#define dbg(x) cout << #x << " = " << x << endl;

void braindeadPechatenje(long double x){
    if(x == (int)x){
        cout << (int)x << " ";
    }
    else {
        cout << x << " ";
    }
}
int main(){
    int n, m;
    cin >> n >> m;
    long double mat[50][50], mat2[50][50];
    for(int row = 0; row < n; row++){
        for(int col = 0; col < m; col++){
            cin >> mat[row][col];
            mat2[row][col] = mat[row][col];
        }
    }
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    for(int row = x1; row <= x2; row++){
        for(int col = y1; col <= y2; col++){
            int x[] = {-1, -1, -1,  0, 0, 0,  1, 1, 1};
            int y[] = {-1,  0,  1, -1, 0, 1, -1, 0, 1};
            long double sum = 0, cnt = 0;
            for(int i = 0; i < 9; i++){
                int cx = x[i], cy = y[i];
                if(row+cx < 0 || row+cx >= n || col+cy < 0 || col+cy >= m) continue;
                sum += mat[row+cx][col+cy];
                cnt++;
            }
            mat2[row][col] = sum/cnt;
        }
    }
    for(int row = 0; row < n; row++){
        for(int col = 0; col < m; col++){
            braindeadPechatenje(mat2[row][col]);
        }
        cout << endl;
    }
}
