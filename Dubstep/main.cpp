#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    for (int i=0; i<s.length()+1; i++){
        if (s[i] =='W' && s[i+1]=='U' && s[i+2]=='B'){
            s.replace(i, 3, " ");            
        }
    }
    cout << s;
}