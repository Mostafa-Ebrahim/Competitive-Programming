#include <bits/stdc++.h>
using namespace std;

void output(int);

int main(){
    int n;
    cin >> n;
    output(n);
}

void output(int n){
    cout << n << " ";
    while (n!=1) {
        if (n%2==0){
            n /= 2;
        }
        else{
            n = n*3 +1;
        }
        cout << n << " ";
    }

}