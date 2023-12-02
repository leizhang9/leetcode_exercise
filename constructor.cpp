#include<iostream>
#include<string>
using namespace std;

class BaseClass {
public:
	BaseClass();  //constructor
	~BaseClass();//deconstructor
	
	void dosomething();
private:
	int i= 2;
};

class SubClass: public BaseClass {
public:
	SubClass();
	~SubClass();
};

BaseClass::BaseClass() {
	
	cout<<"enter baseclass constructor, i did sth in it"<<endl<<endl;
}
BaseClass::~BaseClass()  {
	cout<<"enter baseclass destructor,"<<"i also did sth"<<endl;
}

void BaseClass::dosomething() {
	cout<<"i did something"<<endl;
	cout<<i<<endl;
 
}

SubClass::SubClass() {
	cout<<"enter subclass constructor, i did sth in it"<<endl<<endl;
}
SubClass::~SubClass()  {
	cout<<"enter subclass destructor,"<<"i also did sth"<<endl;
}

int main() {
//	SubClass subclass;
//	subclass.dosomething();
	SubClass* ptr;
	ptr = new SubClass();
	ptr->dosomething();
	cout<<"finished"<<endl;
	
	cout<<"hello \n \n \\";
	return 0;
}
