#include <iostream>
using namespace std;

//Encapsulation

class Student

{
	public :
		int id;
		string name;
		string subject;
		
		void setiD(int id)
		{
			this->id = id;
		}
		
		int getID()
		{
			return this->id;
		}
	
	
	void setName(string name)
		{
			this->name = name;
		}
		
		string getName()
		{
			return this->name;
		}
		
	void setSubject(string subject)
	{
		this->subject = subject;
	}
	
	string getSubject()
	{
		return this->subject;
	}

};

 main()
 {
	Student s1;
	s1.setiD(10);
	cout<<s1.getID();
	
	s1.setName("\nAkshay");
	cout<<s1.getName();
	
	s1.setSubject("\nMaths");
	cout<<s1.getSubject();
}
