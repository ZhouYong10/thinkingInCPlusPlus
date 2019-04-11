#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(){
	vector<string> v;
	string line, str;
	ifstream in("2-6.cpp");
	
	while(getline(in, line)){
		v.push_back(line);
	}
	
	for(int i = 0; i < v.size(); i++){
		str += v[i] + "\n";
	}
	
	cout << str << endl; 
}
