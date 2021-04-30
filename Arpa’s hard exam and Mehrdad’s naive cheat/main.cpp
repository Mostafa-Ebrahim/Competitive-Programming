#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n, x=1;
    cin >> n;

    for (int i=0; i<n; i++){
        x *= 1378;
    }

    cout << x % 10;

}