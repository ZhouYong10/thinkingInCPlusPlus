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
	cout << "�ļ�2-3.cpp�У��Կո�ָ��ĵ�����ĿΪ��"
	<< v.size() << "����" << endl;
} 
