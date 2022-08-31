#include<iostream>

using namespace std;

class T20{
	
	public:
		
		int t20match=20;
		int testmatch=50;
		
		void fun1(){
			cout<<"cricket t20 match over : "<<t20match<<endl;
		}		
};

class Test : public T20{
	
	public:
		
		void fun2(){
			cout<<"cricket test match over : "<<testmatch<<endl;
		}
};

main(){
	
	Test obj;
	
	obj.fun1();
	obj.fun2();
}
