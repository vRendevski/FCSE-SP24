#include <bits/stdc++.h>

using namespace std;
void transform(char c, int x){
    if(c == 'z'+1) c = 'a';
    else if(c == 'Z'+1) c = 'A';
    if(x == 0){
        cout << c;
        return;
    }
    else{
        transform(c+1, x-1);
    }
}
int main(){
    int n, x;
    cin >> n >> x;
    cin.ignore();
    for(int i = 0; i < n; i++){
        char line[81] = {0};
        cin.getline(line, 81);
        for(int j = 0; j < strlen(line); j++){
            if(isalpha(line[j])) transform(line[j], x);
            else cout << line[j];
        }
        cout << endl;
    }
}
