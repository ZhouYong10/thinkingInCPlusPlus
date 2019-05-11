#include <iostream>
using namespace std;

const int i = 100;
const int j = i + 10;
long long address = (long long)&j;
char buf[j + 10];

int main(){
	cout << "address is: " << address << endl;
	cout << "type a character & CR:";
	const char c = cin.get();
	cout << c << endl;
	const char c2 = 'k' + 7;
	cout << c2 << endl;
}
