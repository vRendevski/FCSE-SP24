#include <bits/stdc++.h>

using namespace std;

bool hasA1c(char* arr, int ind, int n){
    if(ind+2 >= n) return false;
    return arr[ind] == 'a' && arr[ind+1] == '1' && arr[ind+2] == 'c';
}
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        char arr[50] = {0};
        cin >> arr;
        int cnt = 0;
        int len = strlen(arr);
        for(int j = 0; j < len; j++){
            arr[j] = tolower(arr[j]);
        }
        for(int j = 0; j < len; j++){
            if(hasA1c(arr, j, len)) cnt++;
        }
        if(cnt >= 2){
            cout << arr << endl;
        }
    }
}
