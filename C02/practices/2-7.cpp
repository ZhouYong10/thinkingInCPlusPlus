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
		while(ent = cin.get() != '\n');  // ����cin�� >> ���ػ������հ��ַ��������س����������޷��� >> ֱ�Ӷ���س�����char c = cin.get(); ���Ƕ���һ�������ַ���ͬ�����Զ���س�����
	}
}
