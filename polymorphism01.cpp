#include<iostream>

using namespace std;

class calculate{
	
	public:
		
		void a(int a,int b){
			cout<<"Division : "<<a/b<<endl;
		} 
		
		void a(int a,int b,int c){
			cout<<"Subtraction : "<<a-b-c<<endl;
		}	
};

class child : public calculate{
	
	public:
		
		void a(int a,int b,int c,int d){
			cout<<"multiplication : "<<a*b*c*d<<endl;
		}
		
		void a(int a,int b,int c,int d,int e){
			cout<<"addition : "<<a+b+c+d+e<<endl;
		}
};

main(){
	
	child obj;
	
	obj.calculate::a(20,5);
	obj.calculate::a(100,21,10);
	obj.a(10,20,30,40);
	obj.a(20,85,41,74,23);
}
