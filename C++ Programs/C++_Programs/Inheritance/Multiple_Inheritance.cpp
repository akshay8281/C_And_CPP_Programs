//Inheritance

//3. Multiple Inheritance


#include <iostream>
using namespace std;


class Papa
{
	public :
		void Land ()
		{
			cout<<"\nPapa - 500 Acre Land in Banglore\n";	
		}	
};

class Kaka
{
	public :
		void House ()
		{
			cout<<"\nKaka - 5 BHK House in Ahmedabad\n";
		}	
};

class Son : public Papa, public Kaka
{
	public :
		void Bike()
		{
			cout<<"\nSon - Yamaha Sport Bike\n";
		}
};		

int main()
{

	cout<<"\n*********** Multiple Inheritance Distribution Property Data ***********\n\n\n";

Son S1;
S1.Bike();
S1.House();
S1.Land();

}
