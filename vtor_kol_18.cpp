#include <bits/stdc++.h>

using namespace std;

void braindeadPechatenje(float x){
    if(x == (int)x){
        cout << (int)x << " ";
    }
    else {
        cout << fixed << setprecision(1) << x << " ";
    }
}
int main(){
    int n;
    cin >> n;
    float x = 0, y = 0;
    for(int row = 0; row < n; row++){
        for(int col = 0; col < n; col++){
            float num;
            cin >> num;
            if(row > col) x += num;
            if(row+col > n-1) y += num;
        }
    }
    for(int row = 0; row < n; row++){
        for(int col = 0; col < n; col++){
            if(row == col && row+col == n-1){
                braindeadPechatenje(x+y);
            }
            else if(row == col){
                braindeadPechatenje(x);
            }
            else if(row+col == n-1){
                braindeadPechatenje(y);
            }
            else cout << 0 << " ";
        }
        cout << endl;
    }
}
