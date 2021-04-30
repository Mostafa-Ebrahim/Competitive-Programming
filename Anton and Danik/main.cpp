#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
   int n,a,d;
   string x;
   cin >> n >>x;

    a= count (x.begin(),x.end() ,'A');
    d= count (x.begin() ,x.end() ,'D');
    if (a>d){cout << "Anton";}
    else if (a<d){cout << "Danik";}
    else cout << "Friendship";

}
