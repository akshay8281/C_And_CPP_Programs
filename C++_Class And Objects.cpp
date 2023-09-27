#include <iostream>
using namespace std;

//01

//Make Programs using Data Member and Member Function using Class in C++
 

//class Student
//{
//public :
//	int age = 50; //Data Member
//
//};
//
//
//int main()
// {
//Student s1;
//cout<<s1.age;
//
//}


//02

//Registration Form using Function
//using Class function
//using Data Member and Member Function in C++


//class Student
//{
//	public :
//		int id;  //Data Member
//		string name;
//		string subject;
//
//

//Method
//	void inputdata()  //Member Function
//	{
//		
//	cout<<"Input Data for The Students\n\n\n";
//		
//	cout<<"Enter the ID of the Student"<<endl;
//	cin>>id;
//	
//	cout<<"\nEnter the Name of the Student"<<endl;
//	cin>>name;
//	
//	cout<<"\nEnter the Subject of the Student"<<endl;
//	cin>>subject;
//	}
//		
//	void displydata ()
//	{
//	cout<<"\n\nDetails of Students\n\n";
//	cout<<"\nID : "<<id<<endl;
//	cout<<"\nName : "<<name<<endl;
//	cout<<"\nStudent : "<<subject<<endl;
//	}

//};
//
//int main()
//{
//	Student s1;
//	s1.inputdata();
//	s1.displydata();
//}


//03
//Two Class Function using Data Member and Member Function

class Student
{
	public :
		int id;
		string name;
		string subject;
		
	void inputData ()
	{
	cout<<"Student Data\n";
	
	cout<<"\nEnter the ID of Student \n";
	cin>>id;
	
	cout<<"\nEnter the Name of Student \n";
	cin>>name;
	
	cout<<"\nEnter the Subject of Student \n";	
	cin>>subject;
	}
	
	void displyData ()
	{
		
		cout<<"\nID : "<<id<<endl;
		cout<<"\nName : "<<name<<endl;
		cout<<"\nSubject : "<<subject<<endl;
	}	
};

class faculty
{
	public :
		int id;
		string name;
		string  department;
		
		
		void inputData ()
		{
			cout<<"\n\n\nFaculty Data\n\n";
			
			cout<<"\nEnter the ID of Faculty : \n";
			cin>>id;
			
			cout<<"\nEnter the Name of Faculty : \n";
			cin>>name;
			
			cout<<"\nEnter the Department of Faculty : \n";
			cin>>department;
		}
		
		void displyData()
		{
		
		cout<<"\nID : "<<id<<endl;
		cout<<"\nname : "<<name<<endl;
		cout<<"\ndepartment : "<<department<<endl;
		}
};

int main()
{
	Student s1;

		s1.inputData();
		s1.displyData();
						
 	faculty f1;
 	
		f1.inputData();
		f1.displyData();
}




















