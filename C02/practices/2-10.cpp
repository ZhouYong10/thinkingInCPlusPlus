#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<float> v1, v2;
	float tem;
	
	for(int i = 0; i < 25; i++){
		cout << "�������" << i + 1 << "�����ݣ�";
		cin >> tem;
		v1.push_back(tem);
		v2.push_back(tem * tem);
	}
	
	cout << "����ǰvector������Ϊ��" << endl; 
	for(int i = 0; i < v1.size(); i++){
		if(i == v1.size() - 1){
			cout << v1[i] << endl;
		}else{
			cout << v1[i] << ", ";
		}
	}
	
	cout << "�����vector������Ϊ��" << endl;
	for(int i = 0; i < v2.size(); i++){
		if(i == v2.size() - 1){
			cout << v2[i] << endl;
		}else{
			cout << v2[i] << ", ";
		}
	} 
}
