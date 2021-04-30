#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    string x;
    set <char> a;
    getline(cin, x);


    for (char i : x){
        if (isalpha(i)){
            a.insert(i);
        }
    }
    cout << a.size() << endl;
}
