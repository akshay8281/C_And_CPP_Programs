//Inheritance

//1. Single Level Inheritance


#include <iostream>
using namespace std;

class Papa
{
	public:
	
	void Land()
	{
		
	cout<<"\n50 Hectare Land at Dholera\n";	
	}	
};

class Child : public Papa
{
	public :
	
		void Bike()
		{
		cout<<"\n\nPulser 220 Model 2023\n\n";	
		}	
		
};



int main()
{
		cout<<"\n*********** Single - Level Inheritance Distribution Property Data ***********\n\n\n";
	
	Child C1;
	C1.Bike();
	C1.Land();

}
