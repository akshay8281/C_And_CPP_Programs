#include <iostream>
using namespace std;

//Task
class Student
{
	public :
		Student()
		{
			cout<<"Addition, Subtraction, Multiplication and Divisable\n";
		}
		
		Student (int a, int b)
		{
			cout<<"\nAddtion of A and B = "<<a+b;
			cout<<"\n\nSubtraction of A and B = "<<a-b;
			cout<<"\n\nMultiplication of A and B = "<<a*b;
			cout<<"\n\nDivision of A and B = "<<a/b;
		}		
};

int main()
{
	Student s1 = Student();
	Student s2 = Student(10,5);
}
