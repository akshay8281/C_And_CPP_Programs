//Encapsulation Practice Program

#include <iostream>
using namespace std;

class CompanyData
{
 public :
 		 int id;
		 string EmployeeName;
		 string companyName;
		 string designation;

		 void setID (int id)
	    {
		   	this->id = id;
	    }	
 	 
 	  	 int getID ()
	    {
 			 return this->id;        	
		}
		 	  
	  void setEmployeeName (string Employeename)
	    {
		    	this->EmployeeName = Employeename;
		}
		 
		 string getEmployeeName ()
 	    {
			return this->EmployeeName;	   				   	
 		}
		   
 	   void setcompanyName (string companyName)
 	    {
       	   	this->companyName = companyName;
		}
		   	   
		string getcompanyName ()
		{
		 	   return this->companyName;	
        }   
	   
	      void setdesignation (string designation)
       
        {
       	  this->designation = designation;
	    }
	      
		  string getdesignation()
       
        {
       	  return this->designation;
	    }
        
};


class EmployeeData
{
	public :
 		   int experience;
		   int salary; 
	  	   int bonus;
		          
				  	           
	void setexperience (int experience) 
	{
		this->experience = experience;
	}    
	
	int getexperience ()
	{
		return this->experience;
	}
	
	
	void setsalary (int salary)
	{
		this->salary = salary;
	}
	
	int getsalary ()
	{
		return this->salary;
	}
	
	void setbonus(int bonus)
	{
		this->bonus = bonus;
	}
	
	int getbonus ()
	{
		return this->bonus;
	}
};


main ()
{
 CompanyData CD;
 
 CD.setID(10);
 cout<<CD.getID()<<endl;
 
 CD.setEmployeeName("\nAkshay Pitroda");
 cout<<CD.getEmployeeName()<<endl;
 
 CD.setcompanyName("\nGodhrej");
 cout<<CD.getcompanyName()<<endl;
 
 CD.setdesignation("\nMarketing Head\n");
 cout<<CD.getdesignation()<<endl;
 
	
	EmployeeData ED;

	
	ED.setexperience(10);
	cout<<ED.getexperience()<<endl<<endl;
	
	ED.setsalary(250000);
	cout<<ED.getsalary()<<endl<<endl;

	ED.setbonus(5000);
	cout<<ED.getbonus()<<endl;	
}