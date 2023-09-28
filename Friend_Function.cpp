
//Friend Function

//Very Important

#include<iostream>
using namespace std;
class A
{
	private :
		int x,y;
			
	public :
		friend void fun();
};

void fun()
{
	A obj;
	obj.x=10;
	obj.y=20;
	
	cout<<"X : "<<obj.x<<endl;
	cout<<"y : "<<obj.y<<endl;
}

int main()
{

fun();
}
