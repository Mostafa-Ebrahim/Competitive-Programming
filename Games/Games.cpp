#include <iostream>
using namespace std;

int main() {
	int n, total = 0;
	cin >> n;
	int* G = new int[n];
	int* H = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> G[i] >> H[i];
		
	}

	for (int k = 0; k < n; k++) {
		for (int j = 0; j < n; j++) {
			if (H[k] == G[j]) {
				total++;
			}
		}
	}
	cout << total;
}