#include <iostream>
using namespace std;

//01
//Constructor

//class Company
//{
//	public :
//		Company () //Default Constructor
//		{
//			cout<<"\nHello And Welcome to the Constructor Programming Session\n";
//		}
//		
//};
//
//main()
////	Object creation
// {
//Company C1=Company();
//}



//02


class Company
{
	public :
		Company () //Default Constructor
		{
			cout<<"\nHello And Welcome to the Constructor Programming Session\n";
		}
		
		Company (int a, int b) //Parametrized Constructor
		{
			cout<<"\nA = "<<a;
			cout<<"\nB = "<<b<<endl;
		}
};

main()
 {
//		Object Creation
Company C1=Company();
Company C2=Company(50,100);
}

