//Inheritance

//2. Multi Level Inheritance


#include <iostream>
using namespace std;

class GrandFather
{
	public : 
	
	void Wealth()
	{
		cout<<"\nGrandFather - 100 Acre in Ahmedabad\n";
		cout<<"\nGrandFather - 3 KG Gold and 5 KG Silver\n";
		cout<<"\nGrandFather - 10 CR Property\n";
	}
};

class Father : public GrandFather
{
	public :
		
		void Factory()
		{
			cout<< "\nFather - Factory at Ahmedabad\n";
		}
};

class Son : public Father
{
		public :
			
		void StockMarket()
		{
			cout<<"\nSon - Portfolio around 1 CR in Stock Market (Angel Broking)\n";
		}
};


int main()
{

	cout<<"\n*********** Multi - Level Inheritance Distribution Property Data ***********\n\n\n";

Son S1;
S1.Wealth();
S1.Factory();
S1.StockMarket();

}
