//Task 4 : create class named swap and swap two numbers without using third variable.

//Using Class and Object in C++

#include <iostream>
using namespace std;

class Swap
{
	public :
		
		int A;
		int B;
		
		void inputData ()
		{
			cout<<"\nEnter the Value of A : \n";
			cin>>A;
			
			cout<<"\nEnter the Value of B : \n";
			cin>>B;
			
			int A,B;      
     {
     	
     	
     	
     	
				A = A * B; //a=50 (5*10)    
				B = A / B; //b=5 (50/10)    
				A = A / B; //a=10 (50/5)    
     	
	 }

			
		}
		
		void displayData ()
		{
			cout<<"\n\nDisplay the SWAP DATA\n\n";
			
			cout<<"Swap A : "<<A;
			cout<<"Swap B : "<<B;
		}


	
};

int main()
{
	 
Swap sw;
sw.inputData();
sw.displayData();
 
}
