#include<bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){
        int n;
        cin >>n;
        int arr[n];
        for (int i=0; i<n; i++){
            cin >> arr [i];
            }
        sort(arr,arr+n);
    for (int j=0; j<n; j++){
        cout << arr[j] << " " ;
    }

}
