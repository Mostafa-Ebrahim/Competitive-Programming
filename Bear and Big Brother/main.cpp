#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,z=0;
    cin >> a >> b;
    while (a<=b){
        a=a*3;
        b=b*2;
        z++;
    }
    cout << z;
}
