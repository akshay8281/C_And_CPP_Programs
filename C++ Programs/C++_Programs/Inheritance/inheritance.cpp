//Inheritence:-when one class inherits properties of another class is called inheritance

// Type of inheritance

//1) single-level inheritance
//
//class A
//  |
//class B


//#include<iostream>
//
//using namespace std;
//
//class father
//{
//	public:
//		void house()
//		{
//			cout<<"2 BHK House";
//			
//		}
//		
//};
// 
//  class child : public father 
//  {
//  	public:
//  		void car()
//  		{
//  			cout<<"Audi car";
//		  }
//  };
//  
//  main()
//  {
//  	child c;
//  	c.house();
//  }
  
  
  
//  
//  2) multi-level Inheritance:-
//  
//  class A
//    |
//  class B
//    |
//  class C


#include<iostream>

using namespace std;

class Grandfather
{
	public:
		void land()
		{
			cout<<"50 Acres";
			
		}
		
};
 
  class father : public Grandfather 
  {
  	public:
  		void house()
  		{
  			cout<<"\n5 BHK";
		  }
  };
  
  
  class son : public father
  {
  	public:
  		void car()
  		{
  			cout<<"\nBMW";
		  }
  };
  main()
  {
  	son obj;
  	obj.land();
  	obj.house();
  	obj.car();
  }




