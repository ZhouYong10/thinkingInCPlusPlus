#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<float> v;
	float aim;
	
	for(int i = 0; i < 25; i++){
		cout << "�������" << i + 1 << "�����ݣ�" ;
		cin >> aim;
		v.push_back(aim); 
	}
	
	for(int i = 0; i < v.size(); i++){
		if(i == v.size() - 1){
			cout << v[i] << endl;
		}else{
			cout << v[i] << ", ";
		}
	}
}
