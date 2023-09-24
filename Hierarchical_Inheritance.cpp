//Inheritance

//4. Hierarchical Inheritance


#include <iostream>
using namespace std;

class Father
{
	public :
	
	void Property()
	{
		cout<<"\nFather - 1000 Acres Land in DHOLERA\n";
		cout<<"\nFather - 5KG Gold and Silver\n";
	}	
};

class Son_1 : public Father
{
	public :
		
		void Factory()
		{
			cout<<"\nSon - 1 : - Sugar Factory at Sanand \n";
		}
		
};

class Son_2 : public Father
{
	public :
	
	void Stock_Market()
	{
		cout<<"\n\n\nSon - 2 : - 5 Cr Portflio in Stock Market - Angel Broking\n";	
	}	
};


int main()
{

	cout<<"\n*********** Hierarchical Inheritance Distribution Property Data ***********\n\n\n";
Son_1 S1;
S1.Factory();
S1.Property();

Son_2 S2;
S2.Stock_Market();
S2.Property();

}
