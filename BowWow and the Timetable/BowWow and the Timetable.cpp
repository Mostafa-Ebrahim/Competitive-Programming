#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int binary(long long );

int main()
{
	long long n,z,x=0;
	cin >> n;
	cout << binary(n);
	
}

int binary(long long n) {
		long long num = n;
		long long dec_value = 0;
		long long base = 1;
		long long temp = num;
		while (temp) {
			long long last_digit = temp % 10;
			temp = temp / 10;

			dec_value += last_digit * base;

			base = base * 2;
		}

		return dec_value;
	}