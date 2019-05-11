#include <iostream>

using namespace std;

class X{
	int i;
public:
	X(int ii);
	int f() const;
};

X::X(int ii) : i(ii){
}

int X::f() const{  // 因 f() 是一个 const 函数，所以不管它试图以何种方式修改变量 i 或者调用一个非 const 的成员函数，编译器都会标记错误。 
//	i = 1000;
	return i;
}

int main(){
	X x1(10);
	const X x2(20);
	cout << x1.f() << endl;
	cout << x2.f() << endl;
	
	return 0;
}
