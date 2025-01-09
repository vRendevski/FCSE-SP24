#include <bits/stdc++.h>

using namespace std;

#define dbg(x) cout << #x << " = " << x << endl;

float solve(int* arr, int idx, int n){
    return (float)arr[idx]+(idx == n-1 ? 0 : 1.0/solve(arr, idx+1, n));
}
int main(){
    int n;
    cin >> n;
    int arr[100] = {0};
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << solve(arr, 0, n) << endl;
}
