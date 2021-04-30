#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin >> n >> t;
    
    if (n==1 && t==10){
        cout << "-1";
    }
    
    else{
        cout << t;
        if (t < 10){
            for (int i=0; i<n-1; i++){
                cout << '0';    
            }
        }
        else if (t == 10){
            for (int a=1; a<n-1; a++){
                cout << '1';
        }
    }
}