#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int mat[100][100];
    for(int row = 0; row < n; row++){
        int sum = 0;
        for(int col = 0; col < m; col++){
            cin >> mat[row][col];
            sum += mat[row][col];
        }
        double avg = (double)sum/m;
        double maxiDiff = 0, maxiElem = mat[row][0];
        for(int col = 0; col < m; col++){
            double diff = abs(avg-mat[row][col]);
            if(diff > maxiDiff){
                maxiDiff = diff;
                maxiElem = mat[row][col];
            }
        }
        cout << (int)maxiElem << " ";
    }
    cout << endl;
}
