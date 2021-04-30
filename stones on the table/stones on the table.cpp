#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
int main()
{
    int n, count = 0;
    cin>> n;
	string s ;
	cin >> s;
    for(int j=0; j<n; j++){
		if (s[j] == s[j + 1])
		{
			count++;
		}
		else count = count;
        }
    cout<<count;
}