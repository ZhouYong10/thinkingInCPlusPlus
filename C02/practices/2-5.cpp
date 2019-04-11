#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(){
	vector<string> v;
	string line;
	ifstream in("2-5.cpp");
	
	while(getline(in, line)){
		v.push_back(line);
	}	
	
	for(int i = v.size() - 1; i >= 0; i--){
		cout << v[i] << endl;
	}
}
