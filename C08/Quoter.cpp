#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Quoter{
	int lastquote;
public:
	Quoter();
	int lastQuote() const;
	const char* quote();
}; 

Quoter::Quoter(){
	lastquote = -1;
	srand(time(0));  // srand() 函数是初始化随机数发生器，用于设置 rand() 产生随机数的种子。参数为 unsigned int 类型。通常使用 time(0) 或 time(NULL) 的返回值作为参数。 
}

int Quoter::lastQuote() const{
	return lastquote;
}

const char* Quoter::quote(){
	static const char* quotes[] = {
		"Are we having fun yet?",
		"Doctors always know best",
		"Is it ... Atomic?",
		"Fear is obscene",
		"There is no scientific evidence ",
		"to support the idea ",
		"that life is serious",
		"Things that make us happy, make us wise",
	};
	const int qsize = sizeof quotes / sizeof *quotes;
	int qnum = rand() % qsize;  // rand() 函数用来生成伪随机数 
	while(lastquote >= 0 && qnum == lastquote){
		qnum = rand() % qsize;
	}
	return quotes[lastquote = qnum];
}

int main(){
	Quoter q;
	const Quoter cq;
	cout << cq.lastQuote() << endl; 
//	cq.quote();
	for(int i = 0; i < 20; i++){
		cout << q.lastQuote() << endl;
		cout << q.quote() << endl;
		cout << q.lastQuote() << endl;
	}
}
