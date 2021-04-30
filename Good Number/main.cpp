#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, counter=0, y=0;
    string x;
    cin >> n >> k;

    for (int i=0; i<n; i++){
        cin >> x;
        vector<int> arr(x.begin(), x.end());
        sort(arr.begin(), arr.end());
        arr.erase(unique(arr.begin(), arr.end()), arr.end());

        for(int j=0; j<k+1; j++){
                if(arr[j]==j+48) y++;
            }

        if(y==k+1) counter++;
        y=0;
        }
    
    cout << counter;
}