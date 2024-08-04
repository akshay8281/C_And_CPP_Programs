//Task : Create a class named area and find the area of rectangle and square

//Using Class and Object

#include <iostream>
using namespace std;

class Area

{
	public :
		int length;
		int width;
		int side;
		
		//Area of Rectangle
		
		void inputData ()
		
		{
			cout<<"\n*********** Area of Rectangle *********** \n\n";
			
			cout<<"\nEnter the length : "<<endl;
			cin>>length;
			
			cout<<"\nEnter the Width : "<<endl;
			cin>>width;
		}
		
		void displayData ()
		{
			cout<<"\nThe Area of Rectangle is : "<<length*width<<endl;
		}
		
		//Area of Square
		
		void inputSquareData ()
		
		{
			cout<<"\n\n\n*********** Area of Square *********** \n\n";
			
			cout<<"\nEnter the Side 1 : "<<endl;
			cin>>side;
			
			cout<<"\nEnter the Side 2 : "<<endl;
			cin>>side;
		}
		
		void displaySquareData ()
		{
			cout<<"\nThe Area of Square is : "<<side*side<<endl<<endl;
		}
		
		
};
		

int main()

{

Area A1;
A1.inputData();
A1.displayData();

Area S1;
S1.inputSquareData();
S1.displaySquareData();

}
