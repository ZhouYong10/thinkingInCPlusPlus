#include <vector>
#include <iostream>

using namespace std;

int main(){
	vector<float> v1, v2, v3;
	float tem;
	
	for(int i = 0; i < 25; i++){
		cout << "请输入v1的第" << i + 1 << "个数据：";
		cin >> tem;
		v1.push_back(tem);
	}
	
	for(int i = 0; i < 25; i++){
		cout << "请输入v2的第" << i + 1 << "个数据：";
		cin >> tem;
		v2.push_back(tem); 
	}
	
	for(int i = 0; i < 25; i++){
		tem = v1[i] + v2[i];
		v3.push_back(tem);
	} 
	
	cout << "计算结果为：" << endl; 
	for(int i = 0; i < v1.size(); i++){
		if(i == v1.size() - 1){
			cout << v1[i] << endl;
		}else{
			cout << v1[i] << ", "; 
		}
	}
	
	for(int i = 0; i < v2.size(); i++){
		if(i == v2.size() - 1){
			cout << v2[i] << endl;
		}else{
			cout << v2[i] << ", ";
		}
	}
	
	for(int i = 0; i < v3.size(); i++){
		if(i == v3.size() - 1){
			cout << v3[i] << endl;
		}else{
			cout << v3[i] << ", ";
		}
	}
	
}
