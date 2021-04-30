#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x, y, level;
    cin >> n;
    int p[n+1] = {0};

    cin >> x;
    for (int i=0; i<x; i++){
        cin >> level;
        p[level] = 1;
    }
    cin >> y;
    for (int j=0; j<y; j++){
        cin >> level;
        p[level] = 1;
    }

    sort(p, p+n+1);

    if (p[1] == 0){
      cout << "Oh, my keyboard!";
    }
    else cout << "I become the guy.";

}