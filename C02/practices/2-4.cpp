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
	cout << "������Ҫͳ�Ƶ�Ŀ�굥�ʣ�";
	cin >> aim;
	for(int i = 0; i < v.size(); i++){
		if(v[i] == aim){
			num += 1;
		}
	}
	cout << "Ŀ�굥�ʣ�" << aim << "�����ֵĴ���Ϊ��" << num << endl; 
}
