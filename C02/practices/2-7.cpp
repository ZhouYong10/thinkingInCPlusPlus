#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
	string line;
	char ent;
	ifstream in("2-7.cpp");
	
	while(getline(in, line)){
		cout << line;
		while(ent = cin.get() != '\n');  // 由于cin的 >> 重载会跳过空白字符，包括回车符，所以无法用 >> 直接读入回车符。char c = cin.get(); 就是读入一个任意字符，同样可以读入回车符。
	}
}
