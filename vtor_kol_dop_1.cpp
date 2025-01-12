#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int maxiLength = 0;
    char maxi[100] = {0};
    for(int i = 0; i < n; i++){
        char arr[100] = {0};
        cin >> arr;
        bool hasSpecial = false;
        int len = strlen(arr);
        for(int j = 0; j < len; j++){
            if(!isalnum(arr[j])){
                hasSpecial = true;
                break;
            }
        }
        int j = 0, k = len-1;
        bool isPalindrome = true;
        while(j <= k){
            if(arr[j] != arr[k]){
                isPalindrome = false;
                break;
            }
            j++; k--;
        }
        if(hasSpecial && isPalindrome && len > maxiLength){
            strcpy(maxi, arr);
            maxiLength = len;
        }
    }
    if(maxiLength == 0){
        cout << "Nema!" << endl;
        return 0;
    }
    cout << maxi << endl;
}
