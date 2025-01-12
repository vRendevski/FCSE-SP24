#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    char mat[50][50];
    for(int row = 0; row < n; row++){
        for(int col = 0; col < n; col++){
            cin >> mat[row][col];
        }
    }
    char word[10] = {0};
    cin >> word;
    int len = strlen(word);
    for(int row = 0; row < n; row++){
        for(int col = 0; col < n; col++){
            if(col+len-1 < n){
                bool has = true;
                for(int i = 0; i < len; i++){
                    if(mat[row][col+i] != word[i]){
                        has = false;
                        break;
                    }
                }
                if(has){
                    cout << row << ", " << col << " -> " << row << ", " << col+len-1 << endl;
                    return 0;
                }
                has = true;
                for(int i = 0; i < len; i++){
                    if(mat[row][col+len-1-i] != word[i]){
                        has = false;
                        break;
                    }
                }
                if(has){
                    cout << row << ", " << col+len-1 << " -> " << row << ", " << col << endl;
                    return 0;
                }
            }
            if(row+len-1 < n){
                bool has = true;
                for(int i = 0; i < len; i++){
                    if(mat[row+i][col] != word[i]){
                        has = false;
                        break;
                    }
                }
                if(has){
                    cout << row << ", " << col << " -> " << row+len-1 << ", " << col << endl;
                    return 0;
                }
            }
        }
    }
    for(int row = 0; row < n; row++){
        for(int col = 0; col < n; col++){
            if(row+len-1 < n){
                bool has = true;
                for(int i = 0; i < len; i++){
                    if(mat[row+len-1-i][col] != word[i]){
                        has = false;
                        break;
                    }
                }
                if(has){
                    cout << row+len-1 << ", " << col << " -> " << row << ", " << col << endl;
                    return 0;
                }

            }
        }
    }
    cout << "Not Found" << endl;
}
