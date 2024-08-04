//polymorphism:-polymorphism derived from greek word poly means many and morphism means forms. 
//so plolymorphism means many forms..

//-> It is defined as one class having many forms.
//
//-> There are two types of it:-3
//
//1)method overloading:-when one class having same method name but different parameters is called method overloading.

//#include<iostream>
//
//using namespace std;
//
//class overloadingDemo
//{
//	public:
//		int a,b;
//		void add(int a, int b)
//		{
//			cout<<a+b<<endl;
//			
//		}
//		
//		void add (int a, int b, int c)
//		{
//			cout<<a+b+c<<endl;
//		}
//		
//		void add (float a, float b)
//		{
//			cout<<a+b<<endl;
//		}
//};
//
//main()
//{
//	overloadingDemo od;
//	od.add(12,25);
//	od.add(12,25,25);
//	od.add(25.25f,25.25f);
//}

//method overriding:- when parent class and child class having same method name is called method overriding.

#include<iostream>

using namespace std;

class parent
{
	public:
		void mobile()
		{
			cout<<"\n I have iphone 14";
		}
};

class child:public parent
{
	public:
		void mobile()
		{
			parent::mobile();  //scope resolution operator bcoz of these upper part print.
			cout<<"\n I have iphone 15 ultra";
		}
};

main()
{
	child obj;
	obj.mobile();
}

//wap to find addition,subtraction and multiplication by using method overloading.

