#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	int a, b, c, d, total = 0;
	int arr[4];
	string s;
	for (int i = 0; i < 4; i++) {
		cin >> arr[i];
	}
	cin >> s;
	
	a = count(s.begin(), s.end(), '1');
	b = count(s.begin(), s.end(), '2');
	c = count(s.begin(), s.end(), '3');
	d = count(s.begin(), s.end(), '4');

	total = arr[0] * a + arr[1] * b + arr[2] * c + arr[3] * d;
	cout << total;
}