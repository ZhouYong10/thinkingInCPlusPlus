#include <iostream>
#include <cstring>

using namespace std;

class StringStack{
	static const int size = 100;  // 决定数组 stack 的大小，这是一个编译期间的常量，隐藏在类中。 
	const string* stack[size];  // stack 是一个指针数组，数组中的指针指向 const string 。 
	int index;
public:
	StringStack();
	void push(const string* s);
	const string* pop();
};

StringStack::StringStack() : index(0){
	memset(stack, 0, size * sizeof(string*));
}

void StringStack::push(const string* s){
	if(index < size){
		stack[index++] = s;
	}
}

const string* StringStack::pop(){
	if(index > 0){
		const string* rv = stack[--index];
		stack[index] = 0;
		return rv;
	}
	return 0;
}

string iceCream[] = {
	"pralines & cream",
	"fudge ripple",
	"jamocha almond fudge",
	"wild mountain blackberry",
	"raspberry sorbet",
	"lemon swirl",
	"rocky road",
	"deep chocolate fudge"
};

const int iCsz = sizeof iceCream / sizeof *iceCream;

int main(){
	StringStack ss;
	for(int i = 0; i < iCsz; i++){
		ss.push(&iceCream[i]);
	}
	
	const string* cp;
	while((cp = ss.pop())!= 0){
		cout << *cp << endl;
	}
	
	return 0;
}
