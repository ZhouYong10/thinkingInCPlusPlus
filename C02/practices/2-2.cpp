#include <iostream>

using namespace std;

int main(){
	float radius;
	float area;
	cout << "请输入圆的半径： ";
	cin >> radius;
	area = 3.1415 * radius * radius;
	cout << "半径： " << radius << " 的圆的面积为： " << area << endl; 
}
