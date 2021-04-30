#include <iostream>
using namespace std;

int main(){

    int n, k;
    cin >> n >> k;
    string s;
    for(int p = 0; p < n; p++){
        s += 'a' + (p % k);
    }
    cout << s << endl;
}