//Inheritance

//5. Hybrid Inheritance
//Hybrid combination of 2 inheritance

//Combination of Multilevel Inheritance and Hieracical Inheritance

#include <iostream>
using namespace std;

class Papa
{
	public :
		void Land  ()
		{
			cout<<"\nPapa - 50 Acres land in Ahmedabad\n";
		}
};

class Kaka
{
	
	public : 
		void Factory () 
		{
			cout<<"\nKaka - Oil Factory in Dholera\n";
		}
};

class Son_1 : public Papa, public Kaka
{
	public :
		void House ()
		{
		cout<<"\nSon - 1 : 5 BHK Bunglow in Borivali - Mumbai\n\n\n";	
		}	
};

class Son_2 :  public Papa, public Kaka
{
	public :
		void Bike ()
		{
		cout<<"\nSon - 2 : Luxurious Yamaha Sport Bike\n";	
		}	
};


int main()
 {
 		cout<<"\n*********** Hybrid Inheritance Distribution Property Data ***********\n";
 		cout<<"\n----- MultiLevel and Hierachical Inheritance -----\n\n\n";

Son_1 S1;
S1.Land();
S1.Factory();
S1.House();

Son_2 S2;
S2.Land();
S2.Factory();
S2.Bike();
 }
