#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, i, x=0;
    cin >> n;
    int arr[n];
    for (i=0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n);

    if (n <= 2){
        cout << "0";
    }
    else {
        for (int j=1; j<n-1; j++){
            if (arr[0] < arr[j] && arr[n-1] > arr[j]){
                x++;
            }
        }
        cout << x;
    }


}