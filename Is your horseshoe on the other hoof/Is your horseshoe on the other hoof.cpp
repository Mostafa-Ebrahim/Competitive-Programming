#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int arr[4], z = 0;
	for (int j = 0; j < 4; j++) {
		cin >> arr[j];
	}
	sort(arr, arr + 4);
	for (int i = 0; i < 4; i++){
		if (arr[i] == arr[i+1]) {
				z++;
		}
	}
	cout << z;
}