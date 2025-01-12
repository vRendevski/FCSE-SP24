#include <bits/stdc++.h>

using namespace std;

int main(){
    float n;
    cin >> n;
    char bestA[10] = {0};
    int bestB = 0;
    float bestC = 0;
    while(true) {
        char a[10]; 
        cin >> a;
        if(strcmp(a, "#") == 0) break;
        int b;
        cin >> b;
        float c;
        cin >> c;
        if(c > bestC){
            strcpy(bestA, a);
            bestB = b;
            bestC = c;
        }
        n *= c;
    }
    cout << bestA << " " << bestB << " " << bestC << endl;
    cout << n << endl;
}
