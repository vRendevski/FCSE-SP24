#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int m = 0;
    while(m*m < n){
        m++;
    }
    int mat[1000][1000] = {{0}};
    int num = 1, cnt = 1;
    while(num <= n) {
        if(cnt % 2 != 0){
            for(int row = 0; row < m; row++){
                mat[row][cnt-1] = num++;
                if(num > n) break;
            }
            cnt++;
        }
        else if(cnt % 2 == 0){
            for(int row = m-1; row >= 0; row--){
                mat[row][cnt-1] = num++;
                if(num > n) break;
            }
            cnt++;
        }
    }
    for(int row = 0; row < m; row++){
        for(int col = 0; col < m; col++){
            cout << mat[row][col] << " ";
        }
        cout << endl;
    }
}
