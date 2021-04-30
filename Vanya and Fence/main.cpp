#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,h,z=0;
    cin >> n >> h;
    int x[n];
    for (int i=0; i<n ;i++){
        cin >> x[i];
    }
    for (int j=0; j<n ;j++){
        if (x[j]<=h){
          z++;
        }
        else z+=2;
    }
cout << z;
}
