#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main(){
	vector<string> v;
	string word;
	ifstream in("2-3.cpp");

	while(in >> word){
		v.push_back(word);
	}
	cout << "文件2-3.cpp中，以空格分隔的单词数目为："
	<< v.size() << "个。" << endl;
} 
