#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int minimum, maximum;

    for(int j; j<n; j++){
        cin >> arr[j];
    }

    for(int i; i<n; i++){
        if (i == 0) {
            minimum = arr[1] - arr[0];
            maximum = arr[n-1] - arr[0];
            cout << minimum << " " << maximum << endl;
        }
        else if (i == n-1){
            minimum = arr[n-1] - arr[n-2];
            maximum = arr[n-1] - arr[0];
            cout << minimum << " " << maximum << endl;
        }
        else{
            if (arr[i]-arr[i-1] <= arr[i+1]-arr[i]){
                minimum = arr[i]-arr[i-1];
            }
            else minimum = arr[i+1]-arr[i];

            if (arr[i]-arr[0] >= arr[n-1]-arr[i]){
                maximum = arr[i]-arr[0];
            }
            else maximum = arr[n-1]-arr[i];

            cout << minimum << " " << maximum << endl;
        }
    }
}
