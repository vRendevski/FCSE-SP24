#include <bits/stdc++.h>

using namespace std;

int solve(int num){
    if(num == 0) return 0;
    return max(num % 10, solve(num / 10));
}
int main(){
    int num = 0;
    while(cin >> num){
        cout << solve(num) << endl;
    }
}
