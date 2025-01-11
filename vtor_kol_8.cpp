#include <bits/stdc++.h>

using namespace std;

int main(){
    char arr[100] = {0}, maxi[100] = {};
    int maxiFirst = 0, maxiLast = 0;
    while(cin.getline(arr, 100) && strcmp(arr, "0") != 0){
        int n = strlen(arr);
        int numCnt = 0, first = -1, last = 0;
        for(int i = 0; i < n; i++){
            if(isdigit(arr[i])){
                numCnt++;
                if(first == -1) first = i;
                last = i;
            }
        }
        if(numCnt >= 2 && n >= strlen(maxi)){
            memset(maxi, 0, 100);
            strcpy(maxi, arr);
            maxiLast = last;
            maxiFirst = first;
        }
    }
    for(int i = maxiFirst; i <= maxiLast; i++){
        cout << maxi[i];
    }
    cout << endl;
}
