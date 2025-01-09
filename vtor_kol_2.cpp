#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(cin >> n && n != 0){
        int maxi = 0, maxiNum = 0;
        for(int i = 0; i < n; i++){
            int num = 0;
            cin >> num;
            int t = num;
            int digit = 0;
            while(num){
                digit = num % 10;
                num /= 10;
            }
            if(digit > maxi){
                maxi = digit;
                maxiNum = t;
            }
        }
        cout << maxiNum << endl;
    }
}
