#include <bits/stdc++.h>

using namespace std;

#define dbg(x) cout << #x << " = " << x << endl;

int poramnet(int a){
    if(a == 0) return 0;
    return poramnet(a/10)*10+(a % 10 == 9 ? 7 : a % 10);
}
int main(){
    int num;
    int arr[1000], cnt = 0;
    while(cin >> num){
        arr[cnt++] = poramnet(num);
    }
    sort(arr, arr+cnt);
    for(int i = 0; i < min(cnt, 5); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
