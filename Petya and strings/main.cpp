#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x,y;
    cin >> x >> y;
    transform(x.begin(), x.end(), x.begin(), ::tolower);
    transform(y.begin(), y.end(), y.begin(), ::tolower);

    if (x>y){
        cout << "1";
    }
    else if (x<y){
        cout << "-1";
    }
    else cout << "0";
}
