#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(){
	vector<string> v;
	string word, aim;
	int num = 0;
	ifstream in("2-4.cpp");
	while(in >> word){
		v.push_back(word);
	}
	cout << "请输入要统计的目标单词：";
	cin >> aim;
	for(int i = 0; i < v.size(); i++){
		if(v[i] == aim){
			num += 1;
		}
	}
	cout << "目标单词：" << aim << "，出现的次数为：" << num << endl; 
}
