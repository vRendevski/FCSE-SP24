#include <bits/stdc++.h>

using namespace std;

bool isVowel(char& c){
    c = tolower(c);
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
    else return false;
}
int main(){
    char line[1000] = {0};
    int ans = 0;
    while(cin >> line && strcmp(line, "#") != 0){
        int n = strlen(line);
        char last = 0;
        for(int i = 0; i < n; i++){
            if(isVowel(line[i]) && isVowel(last)){
                cout << last << line[i] << endl;
                ans++;
            }
            last = line[i];
        }
    }
    cout << ans << endl;
}
