#include <iostream>
using namespace std;

class Demo
{
	public :
	int a, b;
	
	void inputData (int a, int b)
	{
		this->a=a;
		this->b=b;
	}

	void displayData ()
	{
		cout<<"\nA = "<<a;
		cout<<"\nB = "<<b;
	}
	
};

int main()
{
	Demo d1;
		d1.inputData(10,50);
		d1.displayData();
}
