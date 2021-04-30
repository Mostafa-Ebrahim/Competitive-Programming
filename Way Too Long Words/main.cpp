#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    for (int j=0; j<n; j++){
        if (arr[j].size() <= 10){
            cout << arr[j] << endl;
        }
        else{
            cout << arr[j].front() << arr[j].size()-2 << arr[j].back() << endl;
        }
    }
}
