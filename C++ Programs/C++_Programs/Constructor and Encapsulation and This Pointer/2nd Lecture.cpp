#include <iostream>
using namespace std;

class Student
{
	public :
		Student() //Default Consttructor
	{
		cout<<"Welcome to the constructor\n";
	}
	
	Student (int a , int b)  //Parametrized Constructor
	{
		cout<<"\na = "<<a;
		cout<<"\nB = "<<b;
		
	}
	
};

int main()
 {

//Object Creation
Student s1=Student();
Student s2=Student (10,20);
}
