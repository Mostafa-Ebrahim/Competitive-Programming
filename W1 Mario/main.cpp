#include <iostream>
using namespace std;

int main()
{
	void space(int n);
	int x;
	cin >> x;
	for (int j = 1; j <= x; j++) {
		for (int i = x; i >= j; i--) {
			cout << "#" ;
		}
		
		cout << endl;
	}
}

