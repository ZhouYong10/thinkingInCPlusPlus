#include <string>
#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<string> v;
	ifstream in("FillVector.cpp");
	string line;
	while(getline(in, line)){
		v.push_back(line);
	}
	for(int i = 0; i < v.size(); i++){
		cout << i + 1 << ": " << v[i] << endl;
	}
}
