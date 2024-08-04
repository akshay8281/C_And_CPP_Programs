//Task:- create two class company and employee and add following details:-
//company:-
//company name
//company net worth
//company location
//
//employee:-
//employee id
//employee name
//employee dept
//employee salary
//employee designation
//employee bonus


#include <iostream>
using namespace std;

class Company
{
	public :
		string name;
		int networth;
		string location;
		
		void inputData ()
		{
			cout<<"***** Provide Company Data ***** \n";
			
			cout<<"\nEnter the Name of the Company : \n";
			cin>>name;
			
			cout<<"\nEnter the Net Worth of the Company : \n";
			cin>>networth;
			
			cout<<"\nEnter the Location of the Company : \n";
			cin>>location;
		}
		
		
		void displayData ()
		{
			cout<<"\n\n***** Company Detials ***** \n";
			cout<<"\nName of Company : "<<name<<endl;
			cout<<"\nNet Worth of Company : "<<networth<<endl;
			cout<<"\nLocation of Company : "<<location<<endl;
		}
				
};

		class Employee

{
	public :
		int id;
		string name;
		string department;
		int salary;
		string designation;
		int bonus;
		
		void inputData ()
		{
			cout<<"\n\n\n***** Provide Employee Data ***** \n";
			
			cout<<"\nEnter the ID  : \n";
			cin>>id;
			
			cout<<"\nEnter the Name : \n";
			cin>>name;
			
			cout<<"\nEnter the Department : \n";
			cin>>department;
			
			cout<<"\nEnter the Salary : \n";
			cin>>salary;
			
			cout<<"\nEnter the Designation : \n";
			cin>>designation;
			
			cout<<"\nEnter the Bonus : \n";
			cin>>bonus;
		}
		
		
		void displayData ()
		{
			cout<<"\n\n***** Employee Detials ***** \n";
			
			cout<<"\nID : "<<id<<endl;
			cout<<"\nName : "<<name<<endl;
			cout<<"\nDepartment : "<<department<<endl;
			cout<<"\nSalary : "<<salary<<endl;
			cout<<"\nDesignation : "<<designation<<endl;
			cout<<"\nBonus : "<<bonus<<endl;	
		}

};

int main()
 {

Company C1;
C1.inputData();
C1.displayData();

Employee E1;
E1.inputData();
E1.displayData();

}
